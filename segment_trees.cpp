#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//index is nothing but the index of the node
void build_tree(int *tree,int *a,int index,int s,int e){
if(s>e){
	//this is another base
	//eventually it does not hit 
   //but for safety purpose
return;
}
//base case
	if(s==e){
		//this means leaf node
		tree[index]=a[s];
		return;
	}
	//recursive case
	int mid=(s+e)/2;
	//left build
	build_tree(tree,a,2*index,s,mid);
	//right build
	build_tree(tree,a,2*index+1,mid+1,e);
	int left=tree[2*index];
	int right=tree[2*index+1];
	tree[index]=min(left,right);
}

int query(int *tree,int index,int s,int e,int qs,int qe){
//so we have here three cases
	//1.case is no overlap
	if(qs>e or qe<s){
		return INT_MAX;
	}
	//2.case is complete overlap
     if(qs<=s and qe>=e){
     	return tree[index];
     }
	//3.case is partial overlap
     //call on the both sides
     int mid=(s+e)/2;
     int left=query(tree,2*index,s,mid,qs,qe);
     int right=query(tree,2*index+1,mid+1,e,qs,qe);
     return min(left,right);
}

//this update is for a particular
//index or a particular query
void update(int *tree,int *arr,int index,int node,int s,int e,int val){
//check if it hits the leaf node
//then we have to update it
if(s==index and e==index){
arr[index]=val;
tree[node]=val;
return;
}

if(s==e){
return;
}
//no overlapp
if(index<s or index>e){
	return;
}
//now if partial overlap
int mid=(s+e)/2;
update(tree,arr,index,2*node,s,mid,val);
update(tree,arr,index,2*node+1,mid+1,e,val);
//now at the time of returing
//or ie backtracking we have to update the nodes
//to get the correct answer
//ie we have to just change its ancestors only
tree[node]=min(tree[2*node],tree[2*node+1]);
return;
}

//and here below is the update_query for
//range update
//how to update in a particular range
//you will be given a start and end of 
//a particular range and you have to increment
//every or change every element in the range 
//by the value
//but here in the range update actually
//we are not changing the actual array
//instead we are updating the flatten segment tree array
void update_query(int *tree,int node,int s,int e,int qs,int qe,int val){

	
//no overlap
if(qs>e or qe<s){
	return;
}


if(s==e){
tree[node]+=val;

return;
}
//incase of the partial overlap
int mid=(s+e)/2;
update_query(tree,2*node,s,mid,qs,qe,val);
update_query(tree,2*node+1,mid+1,e,qs,qe,val);
tree[node]=min(tree[2*node],tree[2*node+1]);
return;
}





//here we are building the tree
//which is min segment tree
//or min range tree segment tree
//or it is called as query tree
int32_t main(){
	qubais_judge;
	IOS;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //build the segment tree array
    int *tree=new int[4*n+1]{0};//it stores garbage value
    //if we initialize like this
    //int *tree=new int[4*n+1]{0} the entire 
    //memory allocation will store zero(0)
    build_tree(tree,a,1,0,n-1);
//    cout<< query(tree,1,0,n-1,0,n-1)<<endl;
 //   update(tree,a,1,1,0,n-1,4);
//	cout<< query(tree,1,0,n-1,0,n-1)<<endl;
	//now here we are going to write the function
	//for an update query
	//let us see what will happen
	//and we are increasing the range values
	//by a factor of 1
	update_query(tree,1,0,n-1,1,3,1);
	cout<< query(tree,1,0,n-1,0,n-1)<<endl;
	return 0;    
}