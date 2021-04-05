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

node* build_level_order_tree(){
queue<node*> q;
int num;
cin>>num;
node*root=new node(num);
q.push(root);
while(!q.empty()){
node*temp=q.front();
q.pop();
cin>>num;
if(num!=-1){
node*f=new node(num);
temp->left=f;
q.push(f);
}
cin>>num;
if(num!=-1){
	node*f=new node(num);
	temp->right=f;
	q.push(f);
}
}
return root;
}
void printleftView(node*root,int level){
	static int max=-1;
	if(root==NULL){
	 return;
	}
	if(level>max){
	 cout<<root->d<<" ";
	 max=level;
	}
	printleftView(root->left,level+1);
	printleftView(root->right,level+1);
}

int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
    node*root=build_level_order_tree();
    printleftView(root,0);
	return 0;     
}