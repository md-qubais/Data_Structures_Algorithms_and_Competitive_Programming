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


node* create_using_pre(int *in,int *pre,int s,int e){
static int i=0;
if(s>e){
return NULL;
}
node*root=new node(pre[i]);
int index=-1;
for(int j=s;j<=e;j++){
  if(pre[i]==in[j]){
       index=j;
       break;
  }
}
i++;
root->left=create_using_pre(in,pre,s,index-1);
root->right=create_using_pre(in,pre,index+1,e);
return root;
}



void preorder(node*root){
	if(root==NULL){
       return ;
	}
	if(root->left and root->right){
        cout<<root->left->d<<" => "<<root->d<<" <= "<<root->right->d<<endl;
	}
	else if(root->left==NULL and root->right==NULL){
       cout<<"END => "<<root->d<<" <= "<<"END"<<endl;
	}else if(root->left and root->right==NULL){
		cout<<root->left->d<<" => "<<root->d<<" <= "<<"END"<<endl;
	}
    else{
    	cout<<"END => "<<root->d<<" <= "<<root->right->d<<endl;
    }
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
	int pre[num];
	for(int i=0;i<num;i++){
        cin>>pre[i];
	}
	int num1;
	cin>>num1;
	int in[num1];
	for(int i=0;i<num1;i++){
          cin>>in[i];
	}
	node*root=create_using_pre(in,pre,0,num-1);
	preorder(root);
    return 0;
}