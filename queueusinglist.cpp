#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *next;
}*first=NULL,*rear=NULL;

void dequeue(){
	if(first==NULL){
     cout<<"queue is already empty nothing to delete";
	}
	else{
		first=first->next;
	}
}




void enqueue(int key){
if(first==NULL){
first=new node;
first->data=key;
first->next=NULL;
rear=first;
}
else{
	struct node *p=new node;
	p->data=key;
	p->next=NULL;
	rear->next=p;
	rear=p;
}
}

void display(){
if(rear==NULL){
cout<<"queue is empty nothing to display"<<endl;
}
else{
	struct node *p=first;
	while(p!=NULL){
     cout<<p->data<<endl;
     p=p->next;
	}
}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        enqueue(arr[i]);
    }
    cout<<"displaying the queue after creating the queue using linkedlist"<<endl;
    display();
    cout<<"displaying after deleting two elements from the queue"<<endl;
    dequeue();
    dequeue();  
    display();
	return 0;
}