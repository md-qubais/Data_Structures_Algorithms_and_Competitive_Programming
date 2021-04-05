#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node *lchild;
struct node *rchild;
}*root=NULL;

void createtree(struct node *p,int key){
if(root==NULL){
root=new node;
root->data=key;
root->lchild=root->rchild=NULL;
}else{
struct node *q=NULL;
struct node *p=root;
while(p!=NULL){
if(p->data<key){
q=p;
p=p->rchild;
}else if(p->data>key){
q=p;
p=p->lchild;
}
}
if(key>q->data){
struct node *temp=new node;
temp->data=key;
temp->lchild=temp->rchild=NULL;
q->rchild=temp;
}else if(key<q->data){
struct node *temp=new node;
temp->data=key;
temp->lchild=temp->rchild=NULL;
q->lchild=temp;
}
}
}

//recursive insert into binary search tree
struct node *rinsert(struct node *p,int key){
if(root==NULL){
root=new node;
root->data=key;
root->lchild=root->rchild=NULL;
}


if(p==NULL){
struct node *temp=new node;
temp->data=key;
temp->rchild=temp->lchild=NULL;
return temp;
}

if(key<p->data){
p->lchild=rinsert(p->lchild,key);
}
else if(key>p->data){
p->rchild=rinsert(p->rchild,key);
}
return p;
}


//the inroder traversal of the 
//binary search tree will always give
//sorted order or ascending order
void inorder(struct node *p){
if(p){
inorder(p->lchild);
 cout<<p->data<<endl;
inorder(p->rchild);
}
}

//iterative solution for search in the
//binary search tree
struct node* search(struct node *p,int key){

while(p!=NULL){
if(p->data==key){
return p;
}
else if(p->data<key){
p=p->rchild;
}else if(p->data>key){
p=p->lchild;
}
}
return NULL;
}


//recursive solution for searching 
//an element in the binary search tree
struct node* rsearch(struct node *p,int key){
if(p==NULL){
return NULL;
}
if(p->data==key){
return p;
}else if(p->data<key){
return rsearch(p->rchild,key);
}else{
	return rsearch(p->lchild,key);
}
}

//this is the program for deleting the 
//an element from binary search trees
int height(struct node *p){
int x,y;
if(p==NULL){
return 0;
}
x=height(p->lchild);
y=height(p->rchild);
return x>y?x+1:y+1;
}

struct node* pre(struct node *p){
while(p&&p->rchild!=NULL){
p=p->rchild;
}
return p;
}


struct node* suc(struct node *p){
while(p&&p->lchild!=NULL){
p=p->lchild;
}
return p;
}

//now the exact delete method start from here
struct node * del(struct node *p,int key){
struct node *q;
if(p==NULL){
return NULL;
}
if(p->rchild==NULL&&p->lchild==NULL){
if(p==root){
root==NULL;
return NULL;
}else{
p=NULL;
return NULL;
}
}
if(key<p->data){
p->lchild=del(p->lchild,key);
}
else if(key>p->data){
p->rchild=del(p->rchild,key);
}
else {
	
if(height(p->lchild)>height(p->rchild)){
q=pre(p->lchild);
p->data=q->data;
p->lchild=del(p->lchild,q->data);
}else{
q=suc(p->rchild);
p->data=q->data;
p->rchild=del(p->rchild,q->data);
}
}

return p;
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
             cin>>arr[i];
    }

    for(int i=0;i<n;i++){
     rinsert(root,arr[i]);
    }
    cout<<"the elements before deleting an element"<<endl;
    inorder(root);
    del(root,10);
    cout<<"The elements after deleting an element"<<endl;
    inorder(root);
	return 0;
}