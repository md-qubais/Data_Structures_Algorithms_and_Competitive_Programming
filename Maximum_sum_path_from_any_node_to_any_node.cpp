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

//this below solution is way more easier then
//by using class and the pairs at all
int maxPath=0;
int Min=0;
int max_sum_path(node*root){
	if(root==NULL){
		return 0;
	}
	int leftmax=max_sum_path(root->left);
	int rightmax=max_sum_path(root->left);
	leftmax=max(leftmax,Min);
	rightmax=max(rightmax,Min);
	//below are to ignore the negative values
    maxPath=max(max(leftmax,rightmax),max(leftmax+rightmax+root->d,maxPath));
    return max(leftmax,rightmax)+root->d;
}




int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
    node*root=buildtree();
    iterative_level_order_new_line(root);
    max_sum_path(root);
    cout<<endl;
    cout<<maxPath<<endl;
    return 0;     
}