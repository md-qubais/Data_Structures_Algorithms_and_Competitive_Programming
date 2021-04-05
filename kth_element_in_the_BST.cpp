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


node* buildBst(){
  node*root=NULL;
  int d;
  cin>>d;
  while(d!=-1){
      root=insertBst(root,d);
      cin>>d;
  }
  return root;
}


//where in bst the inorder traversal 
//always gives the output in sorted order
void inorder(node*root,int &k){
if(root==NULL){
  //k--;
return;
}
inorder(root->left,k);
k--;
if(k==0){
cout<<root->d<<endl;
//return ;//if we are writing this return then
//we will get the next element also printed in the 
//kth smallest element point of view that 
//is incorrect if and only if we are using the 
//k-- statement in if(root==NULL)
//else you can wrtie return no problem
return;
}
inorder(root->right,k);
}

int32_t main(){
  #ifndef qubais_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  IOS;
  node*root=buildBst();
  int k;
  cin>>k;
  inorder(root,k);
  return 0;     
}