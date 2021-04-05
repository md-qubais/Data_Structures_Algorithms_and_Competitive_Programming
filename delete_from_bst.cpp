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

node* insertBst(node*root,int d){
	if(root==NULL){
       return new node(d);
	}
	if(root->d>d){
       root->left=insertBst(root->left,d);
	}else{
		root->right=insertBst(root->right,d);
	}
return root;
}





void preorder(node*root){
	if(root==NULL){
        return ;
	}
	cout<<root->d<<" ";
	preorder(root->left);
	preorder(root->right);
}

node* del(node*root,int k){
	if(root==NULL){
      return NULL;
	}
	if(root->d>k){
	 root->left=del(root->left,k);
	 return root;
	}
	if(root->d<k){
      root->right=del(root->right,k);
	  return root;
	}
	if(root->d==k){
    //case 1 if the node has no child
		if(root->left==NULL and root->right==NULL){
             return NULL;
		}
	//case 2 if the node has only 1 child
		if(root->left and root->right==NULL){
          return root->left;
		}
		if(root->right and root->left==NULL){
           return root->right;
		}
  //case 3 if the node has both the childs;
		node*temp=root->right;
		while(temp->left!=NULL){
            temp=temp->left;
		}
		root->d=temp->d;
		root->right=del(root->right,temp->d);
		return root;
	}


return root;
}


int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		node*root=NULL;
		for(int i=0;i<num;i++){
             int n;
             cin>>n;
             root=insertBst(root,n);
		}
		int d;
		cin>>d;
		while(d--){
            int n;
            cin>>n;
          root= del(root,n);            
		}
		preorder(root);
		cout<<endl;
	}
    return 0;
}