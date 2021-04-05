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
node* buildusing_pre(int *in,int *pre,int s,int e){
static int i=0;
if(s>e){
return NULL;
}
node*root=new node(pre[i]);
int index=-1;
for(int j=s;j<=e;j++){
if(in[j]==pre[i]){
index=j;
break;
}
}
i++;
root->left=buildusing_pre(in,pre,s,index-1);
root->right=buildusing_pre(in,pre,index+1,e);
return root;
}

void inorder(node*root){
	if(root==NULL){
           return;
	}
	inorder(root->left);
	cout<<root->d<<" ";
	inorder(root->right); 
}



int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	node*root=buildusing_pre(ino,pre,0,5);
	inorder(root);
    return 0;     
}