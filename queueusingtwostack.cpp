#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
}*s1=NULL,*rs1=NULL,*s2=NULL,*rs2=NULL;

void push(struct node *p,int key,int num){
if(key==1){
if(s1==NULL){
s1=new node;
s1->data=num;
s1->next=NULL;
rs1=s1;
}else{
	struct node *temp=new node;
	temp->data=num;
	temp->next=NULL;
	rs1->next=temp;
	rs1=temp;
}
}
else if(key==2){
if(s2==NULL){
s2=new node;
s2->data=num;
s2->next=NULL;
rs2=s2;
}else{
	struct node *temp=new node;
	temp->data=num;
	temp->next=NULL;
	rs2->next=temp;
	rs2=temp;
}

}
}

int pop(struct node *p,int key){
if(key==1){
 if(rs1==NULL){
cout<<"the stack is empty hence cant popout"<<endl;
}
else if(s1->next==NULL){
	int n=s1->data;
	s1=NULL;
	return n;
}
else{
while(p->next!=rs1){
p=p->next;
}
int n=rs1->data;
rs1=p;
rs1->next=NULL;	

return n;
}
}else{
if(rs2==NULL){
cout<<"the stack is empty hence cant popout"<<endl;
}else if(s2->next==NULL){
	int n=s2->data;
	s2=NULL;
	return n;
}
else{
while(p->next!=rs2){
p=p->next;
}
int n=rs2->data;
rs2=p;
rs2->next=NULL;	
return n;
}
}
return 0;
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
        push(s1,1,arr[i]);
   } 
   for(int i=0;i<n;i++){
   	 push(s2,2,pop(s1,1));
   }
   for(int i=0;i<n;i++){
   	cout<<pop(s2,2)<<endl;
   }
	return 0;
}