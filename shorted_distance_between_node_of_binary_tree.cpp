#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class node{
public:
	int d;
	node*right,*left;
	node(int d){
		this->d=d;
		right=left=NULL;
	}
};

node* buildtree(){
	int d;
	cin>>d;
	if(d==(-1)){
    return NULL;
	}
	node *root=new node(d);
	root->left=buildtree();
	root->right=buildtree();
 return root;	
}




int search(node*root,int k,int level){
	if(root==NULL){
           return -1;
	}
	if(root->d==k){
       return level;
	}
	int left=search(root->left,k,level+1);
	int right=search(root->right,k,level+1);
	if(left!=-1){
      return left;
	}
	return right;
}

node* LCA(node*root,int a,int b){
	if(root==NULL){
       return NULL;
	}
	if(root->d==a or root->d==b){
		return root;
	}
	node*left=LCA(root->left,a,b);
	node*right=LCA(root->right,a,b);
	if(left and right){
         return root;
	}
        if(left){
         return left;
        }
        return right;
}

int distance(node*root,int a,int b){
	if(root==NULL){
     return -1;
	}
	int l1=search(root,a,0);
	int l2=search(root,b,0);
 return l1+l2;
}


int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
    node*root=buildtree();
    int a,b;
    cin>>a>>b;
    root=LCA(root,a,b);
    cout<<distance(root,a,b)<<endl;
	return 0;     
}