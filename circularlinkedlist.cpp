#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*first=NULL,*last=NULL;

void create(int *arr,int n){
first=new node;
first->data=arr[0];
first->next=first;
last=first;
for(int i=1;i<n;i++){
struct node *t=new node;
t->data=arr[i];
t->next=last->next;
last->next=t;
last=t;
}
}

void display(struct node* t){
do{
cout<<t->data<<endl;
t=t->next;
}while(t!=first);
}

void displayrec(struct node *t){
static int flag=0;
if(flag==0){
cout<<t->data<<endl;
flag=1;
displayrec(t->next);
}else if(t!=first){
cout<<t->data<<endl;
displayrec(t->next);
}
flag=0;
}


void insert(int key){
if(first==NULL){
first->data=key;
first->next=first;
}
else if(key<=first->data){
	struct node *t=new node;
	t->data=key;
	t->next=first;
	last->next=t;
	first=t;
}
else if(key>=last->data){
struct node *temp=new node;
temp->data=key;
temp->next=last->next;
last->next=temp;
last=temp;
}
else{
	struct node *temp=first;
	struct node *q;
while(temp!=NULL){
if(temp->data>key){
struct node *t=new node;
t->data=key;
t->next=q->next;
q->next=t;
break;
}
q=temp;
temp=temp->next;
}
}
}

void del(int key){
if(first->data==key){
first=first->next;
last->next=first;
}
else {
	struct node *q=NULL,*p=first;
	while(p!=NULL){
               if(p->data==key&&p==last){
                    q->next=first;
                    last=q;
                    break;
               }else if(p->data==key){
                               q->next=p->next;
                               delete p;
                               break;
               }
               q=p;
               p=p->next;
	}
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
	cout<<"the circular linkedlist before deleting any element"<<endl;
	displayrec(first);
    int key;
    cin>>key;
    del(key);
    cout<<"the circular linkedlist after deleting any element"<<endl;
    displayrec(first);

	return 0;
}