#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

//actually here we are coding the 
//sum of the segmentree
//known as the sum segtree

struct segmentree{
vector<int> st;
//below is the function for 
//resizing the dynamic vector
//and because the segment tree wont
//be exceeding the value 4*n
void init(int n){
	st.resize(4*n,0);
}

//here we are building the segmentree
//recursively
//because recursively is really benificial and 
//its really easy to code in many ways
void build(int *a,int start,int end,int node){
//here below we are handling the base case
	if(start==end){
		//here we can write
		//st[node]=st[start] or st[end]
		//eventurally both are the same val
		st[node]=a[start];
		return;

	}


	//here we are dividing the bounds of the segmentree
	//like 0->3 or 0->7
	int mid=(start+end)/2;
//left build
build(a,start,mid,2*node+1);
//right build
build(a,mid+1,end,2*node+2);

//now here we are storing the node val
st[node]=st[2*node+1]+st[2*node+2];
}

int query(int start,int end,int l,int r,int node){
//if no overlap
	if(l>end or r<start){
     //we dont need to go to the subtree
		//so and even we dont want that value
		//so we simply return 0;
		return 0;
	}

//if complete overlap
	if(start>=l  and  end<=r){
         return st[node];
	}

//partial overlap
	int mid=(start+end)/2;
	//left query
	int left=query(start,mid,l,r,2*node+1);
	//right query
	int right=query(mid+1,end,l,r,2*node+2);

//coz it is sum segtree
return left+right;
}


void update(int start,int end,int index,int val,int node){
int mid=(start+end)/2;
//left subtree
if(start==end){
	//it means start==end==index
	st[node]=val;
	a[index]=val;
	//here also we are updating the array also
	//itself
	return;
}
if(index<=mid){
update(start,mid,index,val,2*node+1);
}
//right subtree
else{
update(mid+1,end,index,val,2*node+2);
}
//comming back and updating the current
//segment tree node
st[node]=st[2*node+1]+st[2*node+2];
return;
}
};

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	segmentree tree;
	tree.init(n);
    tree.build(a,0,n-1,0);
    /*for(int i=0;i<4*n;i++){
    	cout<<tree.st[i]<<" ";
    }*/
   //so above this is the entire
   //program for the segment trees and its structure
	return 0;    
}