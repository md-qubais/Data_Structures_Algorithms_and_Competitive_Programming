#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
}*first=NULL,*second=NULL;
void create(int *arr,int n){
	first=new node;
	first->data=arr[0];
	first->next=NULL;
	struct node *p,*t;
	p=first;
	for(int i=1;i<n;i++){
		  t=new node;
		  t->data=arr[i];
		  t->next=NULL;
		  p->next=t;
		  p=t;
	}
}
void display(struct node *p){
while(p!=NULL){
cout<<p->data<<endl;
p=p->next;
}
}

void insert(struct node *p,int key){
struct node *q=NULL;
while(p!=NULL){
if(key<=first->data){
struct node *t=new node;
t->data=key;
t->next=first;
first=t;
break;
}
else if(p->data>key){
struct node *t=new node;
t->data=key;
t->next=q->next;
q->next=t;
break;
}
q=p;
p=p->next;
}
if(q!=NULL){
struct node *t=new node;
t->data=key;
t->next=NULL;
q->next=t;
}
}
bool s(struct node *p){
bool b=true;
while(p->next!=NULL){
if(p->data>p->next->data){
b=false;
break;
}
p=p->next;
}
return b;
}

void del(struct node *p,int key){
if(first->data==key){
first=first->next;
}
else{
	struct  node *q=NULL;
	while(p!=NULL){
      if(p->data==key){
         q->next=p->next;
         delete p;
         break;
      }
      q=p;
      p=p->next;
	}
}
}

void remove(struct node *p){
struct node *q=NULL;
q=p->next;
while(q!=NULL){
if(p->data!=q->data){
p->next=q;
p=q;
}
q=q->next;
}
}

void reverse(struct node *p){
struct node *q=NULL,*r=NULL;
while(p!=NULL){
q=r,r=p,p=p->next;
r->next=q;
}
first=r;

}
void recursivereverse(struct node *p,struct node *r) 
{
	if(p!=NULL){
       recursivereverse(p->next,p);
       p->next=r;
	}else{
		first=r;
	}
}
void createsecond(int *arr,int n){
	second=new node;
	second->data=arr[0];
	second->next=NULL;
	struct node *p,*t;
	p=second;
	for(int i=1;i<n;i++){
		  t=new node;
		  t->data=arr[i];
		  t->next=NULL;
		  p->next=t;
		  p=t;
	}	
}

void concat(struct node *p,struct node *t){
while(p->next!=NULL){
p=p->next;
}
p->next=t;
}
void merge(struct node *p,struct node *t){
if(p->data<t->data){
	first=p;
	p=p->next;
}else{
	first=t;
	t=t->next;
}
struct node *temp=first;
while(p!=NULL&&t!=NULL){
	if(p->data<t->data){
		temp->next=p;
		temp=p;
		p=p->next;
	}else{
		temp->next=t;
		temp=t;
		t=t->next;
	}
}
while(p!=NULL){
	temp->next=p;
	temp=p;
	p=p->next;
}
while(t!=NULL){
	temp->next=t;
	temp=t;
	t=t->next;
	
}
}
bool loop(struct node *p){
bool b=false;
struct node *t=first,*q=first;
do{
p=p->next;
q=q->next;
if(q!=NULL){
q=q->next;
}
}while(p&&q&&p!=q);
if(p==q){
b=true;
}
if(p==NULL||q==NULL){
b=false;
}
return b;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif
      int arr[]={1};
      int n=sizeof(arr)/sizeof(arr[0]);
      create(arr,n);
      bool b=loop(first);
      if(b==true){
       cout<<"Loop existed";
      }else{
      	cout<<"Loop does not existed";
      }
      return 0;
}