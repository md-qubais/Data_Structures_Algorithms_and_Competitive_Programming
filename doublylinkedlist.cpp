#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* next;
	struct node* prev;
}*first=NULL,*last=NULL;

void create(int *arr,int n){
first=new node;
first->data=arr[0];
first->next=NULL;
first->prev=NULL;
struct node *p,*q;
p=first;
for(int i=1;i<n;i++){
q=new node;
q->data=arr[i];
q->next=NULL;
q->prev=p;
p->next=q;
p=q;
}
last=p;
}

void display(struct node *p){
while(p!=NULL){
cout<<p->data<<endl;
p=p->next;
}
}

void displayrec(struct node *p){
static int flag=0;
if(flag==0){
cout<<p->data<<endl;
flag=1;
displayrec(p->next);

}
else{
	if(p!=first){
      cout<<p->data<<endl;
      displayrec(p->next);
	}

}
flag=0;
}

void insert(int key){
struct node *p=first;
if(key<=p->data){
struct node *temp=new node;
temp->data=key;
temp->next=first;
temp->prev=NULL;
first=temp;
}else if(key>=last->data){
struct node *temp=new node;
temp->data=key;
temp->next=NULL;
temp->prev=last;
last->next=temp;
last=temp;
}else {
	while(p!=NULL){
    if(p->data>key){
    struct node *temp=new node;
    temp->data=key;
    temp->next=p;
    temp->prev=p->prev;
    p->prev->next=temp;
    p->prev=temp;
    break;
    }

    p=p->next;
	}
}
}

void del(int key){
if(first->data==key){
first=first->next;
}
else if(last->data==key){
last=last->prev;
last->next=NULL;
}else {
struct node *p=first;
while(p!=NULL){
	if(p->data==key){
     p->prev->next=p->next;
     p->next->prev=p->prev;

     break;
	}
p=p->next;
}
}
}

void createcir(int *arr,int n){
first=new node;
first->data=arr[0];
first->next=NULL;
first->prev=NULL;
struct node *p,*q;
p=first;
for(int i=1;i<n;i++){
q=new node;
q->data=arr[i];
q->next=NULL;
q->prev=p;
p->next=q;
p=q;
}
last=p;
first->prev=last;
last->next=first;
}
void reverse(struct node *p){
while(p!=NULL){
struct node *temp=p->next;
if(p->next==NULL){
first=p;
}
p->next=p->prev;
p->prev=temp;
p=p->prev;
}
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
    create(arr,n);
    reverse(first);
    return 0;
}