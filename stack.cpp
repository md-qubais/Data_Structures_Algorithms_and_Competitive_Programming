#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*first=NULL,*last=NULL;
void push(struct node *p,int key){
if(first==NULL){
first=new node;
first->data=key;
first->next=NULL;
first->prev=NULL;
last=first;
}else{
	struct node *temp=new node;
	temp->data=key;
	temp->next=NULL;
	temp->prev=last;
	last->next=temp;
	last=temp;
}
}
void pop(struct node *p){
last=last->prev;
last->next=NULL;
}
int top(struct node *p){
return last->data;
}
void display(struct node *p){
while(p!=NULL){
cout<<p->data<<endl;
p=p->prev;
}
}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	#endif
	push(first,10);
    push(first,20);
    push(first,30);
    push(first,40);
    push(first,50);
    cout<<"displaying elements of the stack after pushing some elements"<<endl;
    display(last);  
    int a=top(first);
    cout<<"displaying elements of the stack after poping out  top element:"<<a<<endl;
    pop(first);
	display(last);
    a=top(first);
    cout<<"again after poping out:"<<a<<endl;
    pop(first);
    display(last);
	return 0;
}