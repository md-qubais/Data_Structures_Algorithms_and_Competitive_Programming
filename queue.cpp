#include<bits/stdc++.h>
using namespace std;
struct node{
int size;
int first;
int rear;
int *arr;
};

void enqueue(struct node *p,int key){
if(p->rear==p->size-1){
cout<<"Queue is fuLL and new element cant be inserted"<<endl;
}
else{
	p->arr[++p->rear]=key;
}
}

void dequeue(struct node *p){
if(p->rear==-1){
cout<<"The queue is empty and the element cant be deleted"<<endl;
}
else{
int a=	p->arr[++p->first];
cout<<"the element "<<a<<" is removed from the queue"<<endl;
}
}

void display(struct node *p){
if(p->rear==-1){
cout<<"The queue is empty"<<endl;
}
else{
	for(int i=p->first+1;i<=p->rear;i++){
    cout<<p->arr[i]<<endl;
	}
}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    struct node q;
    int n;
    cin>>n;
    q.size=n;
    q.arr=new int[q.size];
    q.first=-1;
    q.rear=-1;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    enqueue(&q,arr[i]);
    }
    cout<<"displaying the elements after inserting it into queue"<<endl;
    display(&q);
    cout<<"now displaying the elements after deleting one element from the queue"<<endl;
	dequeue(&q);
	display(&q);
	return 0;
}