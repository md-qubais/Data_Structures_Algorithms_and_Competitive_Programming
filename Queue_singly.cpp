#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;


//here we written a class 
//for implementing the Queue using array
//Actually it is known as the dequeue not queue
class Queue{
private:
	int first,rear,cs,max,*arr;
public:
	Queue(int ds=5){
    arr=new int[ds];
    first=0;
    rear=ds-1;
    cs=0;
    max=ds;
	}
void push(int i){
	if(!full()){
rear=(rear+1)%max;
arr[rear]=i;
cs++;
	}else{
		cout<<"Queue is full cant insert any value"<<endl;
	}
}
void pop(){
 if(!empty()){
       first=(first+1)%max;
cs--;
 }else{
 	cout<<"Queue is empty cant pop out the element"<<endl;
 }
}
int size(){
	return cs;
}
int front(){
	if(!empty()){
	return arr[first];
	}
	return -1;
}
int last(){
	if(!empty()){
	return arr[rear]; 
}
return -1;
}
bool full(){
	return cs==max;
}
bool empty(){
return cs==0;
}
~Queue(){
	delete []arr;
}
};

//here we wrote a class and all the functions
//for implementing the queue using linkedlist
class node{
public:
 node*next;
 int data;
 node(int d){
 	data=d;
 	next=NULL;
 }
};
class Queue_linkedlist{
public:
	int c=0;
	node*head=NULL,*rear=NULL;
	void push(int data){
              c++;
               node*temp=new node(data);
              if(head==NULL){
                           head=temp;
                           rear=head;

              }else{
              	rear->next=temp;
              	rear=temp;
              }

	}

	void pop(){
		 if(head!=NULL){
                c--;
                node*temp=head;
                head=head->next;
                  delete temp;
		 }else{
		 	cout<<"cant pop out the queue is empty"<<endl;
		 } 
	}
int size(){
	return c;
}
bool empty(){
	return head==NULL;
}
	int front(){
		if(head!=NULL){
           return head->data;
		}
 return -1;
	}
};


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
//	Queue q(10);
/*	q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(11);
    q.push(12);
  while(!q.empty()){
  cout<<q.front()<<endl;
  q.pop();
  }    
  q.pop();
  q.pop();
  */
	/*
	cout<<q.front()<<endl;
    cout<<q.last()<<endl;
    */
    Queue_linkedlist q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    q.pop();
    return 0;
}