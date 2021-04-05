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

void InsertAtTail(node*&head,node*&tail,int val){
	node*n=new node(val);
	if(tail==NULL){
		head=tail=n;
	}else{
		tail->next=n;
		tail=n;
	}
}
bool isCyclic(node*head){
	node*fast=head,*slow=head;
	while(fast and fast->next){
		fast=fast->next->next;
		slow=slow->next;
		if(slow==fast){
			slow=head;
			node*prev=head;
			while(prev->next!=fast){
				prev=prev->next;
			}
			while(fast!=slow){
				slow=slow->next;
				prev=prev->next;
				fast=fast->next;
			}
			prev->next=NULL;
			return true;
		}
	}
	return false;
}
void create_cycle(node*&head){
	node*temp=head;
	unordered_map<int,int> m;
	node*prev=NULL;
	while(temp and m[temp->val]==0){
		m[temp->val]++;
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL){
		return;
	}
	int num=temp->val;
	node*temp2=head;
	while(temp2->val!=num){
		temp2=temp2->next;
	}
	prev->next=temp2;
}
void display(node*head){
	if(head==NULL){
		return;
	}
	cout<<head->val<<" ";
	display(head->next);
}


int32_t main(){
	qubais_judge;
	IOS;
	node*head=NULL,*tail=NULL;
	int num;
	cin>>num;
	while(num!=-1){
		InsertAtTail(head,tail,num);
		cin>>num;
	}
	create_cycle(head);
	isCyclic(head);
	display(head);
	return 0;
}