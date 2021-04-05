#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class node{
public:
	int d;
	node*left,*right;
	node(int d){
		this->d=d;
		left=right=NULL;
	}
};
node* buildtree(int *arr,int s,int e){
	if(s>e){
       return NULL;
	}
	int mid=(s+e)/2;
	node*root=new node(arr[mid]);
	root->left=buildtree(arr,s,mid-1);
	root->right=buildtree(arr,mid+1,e);
    return root;
}

void rightorder(node*root){
	static int i=0;
	static int sum=0;
	if(root==NULL){
         return;
	}
	rightorder(root->right);
	if(i==0){
        sum=root->d;
	}else{
		root->d=root->d+sum;
		sum=root->d;
	}
	i++;
	rightorder(root->left);
}


void preorder(node*root){
	if(root==NULL){
      return ;
	}
	cout<<root->d<<" ";
	preorder(root->left);
	preorder(root->right);

}



int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
           cin>>arr[i]; 
    }
    node*root=buildtree(arr,0,num-1);
    rightorder(root);
    preorder(root);
    return 0;     
}