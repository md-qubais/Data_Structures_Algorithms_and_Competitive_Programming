#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class node{
public:
	int val;
	node*next;
	node(int val){
		this->val=val;
		next=NULL;
	}
};
class Queue{
	node*head,*tail;
	int len;
public:
	Queue(){
		head=tail=NULL;
		len=0;
	}
	void push(int val){
		len++;
		if(head==NULL){
			head=new node(val);
			tail=head;
		}else{
			node*n=new node(val);
			tail->next=n;
			tail=n;
		}

	}
	void pop(){
		if(head==NULL){
			return;
		}
		len--;
		node*n=head;
		head=head->next;
		delete n;
	}
	int size(){
		return len;
	}
	bool empty(){
		return len==0;
	}
	int front(){
		if(head!=NULL){
			return head->val;
		}
		return -1;
	}
	void display(){
		if(head==NULL){
			return;
		}
		node*temp=head;
		while(temp){
			cout<<temp->val<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
};
int32_t main(){
	qubais_judge;
	IOS;
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	while(!q.empty()){
		q.display();
		q.pop();
	}
	return 0;   
}