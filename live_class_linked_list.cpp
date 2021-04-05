#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class node{
public:
	int val;
	node*next;//self referential pointer
	//node(int val):val(val),next(NULL){}
	node(int val){
		this->val=val;
		next=NULL;
	}
};
void InsertAtHead(node* &head,node* &tail,int val){
	node *n=new node(val);
	if(head==NULL){//if no node present
		head=tail=n;
	}else{// if linkedlist is present
		n->next=head;
		head=n;
	}
}
void InsertAtTail(node*&head,node*&tail,int val){
	node*n=new node(val);
	if(tail==NULL){
		head=tail=n;
	}else{
		tail->next=n;
		tail=n;
	}
}
void InsertAt(node*&head,node*&tail,int val,int pos){
	if(pos==0){
		InsertAtHead(head,tail,val);
		return;
	}
	node*n=new node(val);
	node*temp=head;
	pos--;
	while(pos--){
		temp=temp->next;
	}
	n->next=temp->next;
	temp->next=n;
}

void display(node*head){
	while(head){
		cout<<head->val<<"->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

int length(node*head){
	int ans=0;
	while(head!=NULL){
		ans++;
		head=head->next;
	}
	return ans;
}

void deleteAtFront(node*&head){
	if(head==NULL){
		return;
	}
	node*n=head;
	head=head->next;
	delete n;
}

void deleteAtEnd(node*&head,node*&tail){
	if(tail==NULL){
		return;
	}
	if(tail==head){
		delete head;
		head=tail=NULL;
	}
	node*temp=head;
	while(temp->next!=tail){
		temp=temp->next;
	}
	delete tail;
	tail=temp;
	tail->next=NULL;
}

void deleteAtPos(node*&head,node*&tail,int pos){
	if(pos==0){
		deleteAtFront(head);
		return;
	}
	if(pos==length(head)-1){
		deleteAtEnd(head,tail);
		return;
	}
	node*temp=head;
	for(int i=1;i<pos;i++){
		temp=temp->next;
	}
	node*n=temp->next;
	temp->next=n->next;
	delete n;
}

int lengthRec(node*temp){
	if(temp==NULL){
		return 0;
	}
	return lengthRec(temp->next)+1;
}

node* searchRec(node*head,int n){
	if(head==NULL){
		return NULL;
	}
	if(head->val==n){
		return head;
	}
	return searchRec(head->next,n);
}


//without calculating the length
node* mid(node*head){
	if(head==NULL){
		return head;
	}
	node*slow=head,*fast=head->next;
	while(fast!=NULL and fast->next!=NULL ){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
void reverse(node*&head){
	if(head->next==NULL){
		return ;
	}
	node*c=head;
	node*n;
	node*prev=NULL;
	while(c!=NULL){
		n=c->next;
		c->next=prev;
		prev=c;
		c=n;
	}
	head=prev;
}

/*
void reverse(node*&head){
	if(head->next==NULL){
		return;
	}
	node*r=NULL;
	node*temp=head;
	head=head->next;
	while(head!=NULL){
		temp->next=r;
		r=temp;
		temp=head;
		head=head->next;
	}
	temp->next=r;
	head=temp;
}*/


void reverseRec(node*&head,node*h,node*c,node*p){
	if(h==NULL){
		c->next=p;
		head=c;
		return;
	}
	reverseRec(head,h->next,h,c);
	if(c!=NULL){
		c->next=p;
	}
}


/*void reverseRec(node*&head,node*h,node*temp,node*r){
	if(h==NULL){
		temp->next=r;
		head=temp;
		return;
	}	
	reverseRec(head,h->next,h,temp);
	if(temp!=NULL){
		temp->next=r;
	}
}*/
int32_t main(){
	qubais_judge;
	IOS;
	node*head=NULL,*tail=NULL;
	InsertAtTail(head,tail,10);
	InsertAtTail(head,tail,20);
	InsertAtTail(head,tail,30);
	InsertAtTail(head,tail,40);
	InsertAt(head,tail,100,2);
	InsertAt(head,tail,500,0);
	InsertAt(head,tail,-1,0);
	display(head);
	cout<<lengthRec(head)<<endl;
	deleteAtFront(head);
	display(head);
	cout<<lengthRec(head)<<endl;
	deleteAtEnd(head,tail);
	display(head);
	cout<<lengthRec(head)<<endl;
	deleteAtPos(head,tail,3);
	display(head);
	cout<<lengthRec(head)<<endl;
	node*search=searchRec(head,30);
	if(search==NULL){
		cout<<"data not found in the linkedlist "<<endl;
	}
	else{
		cout<<"data found in the linkedlist ->"<<search->val<<endl;
	}
	cout<<mid(head)->val<<endl;
	//deleteAtEnd(head,tail);
	//deleteAtEnd(head,tail);
	display(head);
	reverse(head);
	display(head);
	reverseRec(head,head,NULL,NULL);
	display(head);
	return 0;   
}