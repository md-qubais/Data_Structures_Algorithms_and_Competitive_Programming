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

node* buildtree(){
string b;
cin>>b;
if(b=="false"){
return NULL;
}
int num;
cin>>num;
node*root=new node(num);
root->left=buildtree();
root->right=buildtree();
return root;
}


void iterative_level_order_new_line(node*root){
queue<node*> q;
q.push(root);
q.push(NULL);
while(!q.empty()){
	node*f=q.front();
	q.pop();
	if(f==NULL && q.front()==NULL){
	break;
	}
	if(f){
		cout<<f->d<<" ";
	if(f->left){
	 q.push(f->left);
	}
	if(f->right){
		q.push(f->right);
	}
	}else{
	cout<<endl;
	q.push(NULL);
	}
}
}

void preorder(node*root,int k){
	if(root==NULL){
 return ;
	}
	if(k==1){
        cout<<root->d<<" ";
        return ;
	}
	preorder(root->left,k-1);
	preorder(root->right,k-1);

}

void rightorder(node*root,int k){
	if(root==NULL){
 return ;
	}
	if(k==1){
 cout<<root->d<<" ";
 return ;
	}
	rightorder(root->right,k-1);
	rightorder(root->left,k-1);

}



void zig_zag(node*root,int k){
	for(int i=1;i<=k;i++){
       if(i%2==0){
        rightorder(root,i);
       }else{
       	preorder(root,i);
       }
	}

}


int height(node*root){
if(root==NULL){
return 0;
}
return max(height(root->left),height(root->right))+1;
}


int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int a;
	cin>>a;
	node*root=new node(a);
    root->left=buildtree();
    root->right=buildtree();
    int h=height(root);
    zig_zag(root,h);
    return 0;     
}