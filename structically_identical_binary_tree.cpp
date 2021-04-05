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



bool isSame(node*root1,node*root2){
	if((root1==NULL and root2) or (root1 and root2==NULL)){
     return false;
	}
	if(root1==NULL and root2==NULL){
       return true;
	}
    return (isSame(root1->left,root2->left) and isSame(root1->right,root2->right));
}




int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int a,b;
	cin>>a;
	node*root1=new node(a);
    root1->left=buildtree();
    root1->right=buildtree();
    cin>>b;
    node*root2=new node(b);
    root2->left=buildtree();
    root2->right=buildtree();
    if(isSame(root1,root2)){
         cout<<"true"<<endl;
    }else{
    	cout<<"false"<<endl;
    }
    return 0;     
}