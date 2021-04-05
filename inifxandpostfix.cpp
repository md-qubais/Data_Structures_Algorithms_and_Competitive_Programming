#include<bits/stdc++.h>
using namespace std;
struct node {
	char data;
	struct node *next;
	struct node *prev;
}*first=NULL,*last=NULL;
void push(char key){
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
bool isempty(){
	if(first==NULL){
		return true;
	}else{
		return false;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    return 0;
}