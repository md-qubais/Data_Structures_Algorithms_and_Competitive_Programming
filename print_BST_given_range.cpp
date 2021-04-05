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
void inorder(node*root,int a,int b){
	if(root==NULL){
           return;
	}
	inorder(root->left,a,b);
	if(root->d>=a and root->d<=b){
     cout<<root->d<<" ";
	}
	inorder(root->right,a,b); 
}

void preorder(node*root){
	if(root==NULL){
         return ;
	}
	cout<<root->d<<" ";
	preorder(root->left);
	preorder(root->right);

}
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
        int a,b;
        cin>>a>>b;
        cout<<"# Preorder : ";
        preorder(root);
        cout<<endl;
        cout<<"# Nodes within range are : ";
        inorder(root,a,b);
        cout<<endl;
	}
   return 0;     
}