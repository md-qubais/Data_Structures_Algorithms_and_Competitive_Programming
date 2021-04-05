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
class Pair{
public:
	int height;
	bool rate;
};
Pair isBalanced(node*root){
	Pair p;
	if(root==NULL){
          p.height=0;
          p.rate=true;
          return p;
	}
	Pair left=isBalanced(root->left);
	Pair right=isBalanced(root->right);
	int res=left.height-right.height;
	if(res<0){
		res=-res;
	}
	p.height=max(left.height,right.height)+1;
	if(res<=1 and left.rate and right.rate){
		p.rate=true;
	}else{
		p.rate=false;
	}
return p;
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
    Pair p=isBalanced(root);
    if(p.rate){
      cout<<"true"<<endl;
    }else{
    	cout<<"false"<<endl;
    }
    return 0;     
}