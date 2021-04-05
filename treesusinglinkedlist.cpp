#include<bits/stdc++.h>
using namespace std;
struct node{
struct node* lchild;
int data;
struct node* rchild;
}*root=NULL;
void createtree(){
queue<node*> q;
if(root==NULL){
int n;
cin>>n;
root=new node;
root->data=n;
root->lchild=root->rchild=NULL;
q.push(root);
}
while(!q.empty()){
struct node *p=q.front();
q.pop();
int num;
cin>>num;
if(num>0){
struct node *temp=new node;
temp->data=num;
temp->lchild=temp->rchild=NULL;
p->lchild=temp;
q.push(temp);
}
cin>>num;
if(num>0){
	struct node *temp=new node;
	temp->data=num;
	temp->lchild=temp->rchild=NULL;
	p->rchild=temp;
	q.push(temp);
}
}
}
void display(struct node *p){
	if(p){
		display(p->lchild);
		cout<<p->data;
		display(p->rchild);
	}
}
//these are the recursive functions for the 
//tree traversing techniques
void preorder(struct node *p){
	if(p){
		 cout<<p->data<<endl;
		 preorder(p->lchild);
		 preorder(p->rchild);
	}
}

void inorder(struct node *p){
	if(p){
		 inorder(p->lchild);
		 cout<<p->data<<endl;
		 inorder(p->rchild);
	}
}

void postorder(struct node *p){
	if(p){
		postorder(p->lchild);
		postorder(p->rchild);
		cout<<p->data<<endl;
	}
}

//iterative tree traversal technique
//using stack
void iterativepreorder(struct node *p){
stack<node*> st;
while(p!=NULL||!st.empty()){
if(p!=NULL){
cout<<p->data<<endl;
st.push(p);
p=p->lchild;
}else if(p==NULL){
struct node *temp=st.top();
st.pop();
p=temp->rchild;
}
}
}

void iterativeoinorder(struct node *p){
stack<node*> st;
while(p!=NULL||!st.empty()){
	if(p!=NULL){
		st.push(p);
		p=p->lchild;
	}else if(p==NULL){
		struct node *temp=st.top();
		st.pop();
		cout<<temp->data<<endl;
		p=temp->rchild;
	}
	
	
}
}

void iterativepostorder(struct node* p){
stack<node*> s1,s2;
s1.push(p);
while(!s1.empty()){
	struct node *temp=s1.top();
	s1.pop();
	s2.push(temp);
	if(temp->lchild){
		s1.push(temp->lchild);
	}
	if(temp->rchild){
		s1.push(temp->rchild);
	}
}
while(!s2.empty()){
	struct node *temp=s2.top();
	s2.pop();
	cout<<temp->data<<endl;
}
}


//My(Mohammed qubaisuddin's) own
//method and implementation of
//trees level order traversal technique
//this is levelorder traversal 
//with return type of int
//for returning count of the node
//present in the tree
int levelorder(struct node *p){
vector<node*> v;
int count=0;
	v.push_back(p);
	for(int i=0;i<v.size();i++){
		struct node* temp=v[i];
		if(temp->lchild){
			v.push_back(temp->lchild);
		}
		if(temp->rchild){
			v.push_back(temp->rchild);
		}
	}
	
	for(int i=0;i<v.size();i++){
		count++;
		cout<<v[i]->data<<endl;
	}
	return count;
}

//This is the recursive function 
//to find the depth or the height 
//of the binary tree
int height(struct node *p){
int x,y;
if(p==NULL){
	return 0;
}
x=height(p->lchild);
y=height(p->rchild);
return x>y?x+1:y+1;

}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif
    createtree();
 
 	return 0;
}