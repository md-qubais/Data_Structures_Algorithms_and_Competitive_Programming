#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class ListNode{
public:
	int val;
	ListNode*next;
	ListNode(int val){
		this->val=val;
		next=NULL;
	}
};

void InsertAtTail(ListNode*&head,ListNode*&tail,int val){
	ListNode*n=new ListNode(val);
	if(tail==NULL){
		head=tail=n;
	}else{
		tail->next=n;
		tail=n;
	}
}

void display(ListNode*head){
	if(head){
		cout<<head->val<<"->";
		display(head->next);
		return;
	}
	cout<<"NULL"<<endl;
}

void insert(ListNode*&head,ListNode*&tail,int val){
	if(head==NULL){
		head=new ListNode(val);
		tail=head;
		return;
	}
	if(val<=head->val){
		ListNode*n=new ListNode(val);
		n->next=head;
		head=n;
		return;
	}
	if(val>=tail->val){
		ListNode*n=new ListNode(val);
		tail->next=n;
		tail=n;
		return;
	}
	ListNode*prev=NULL;
	ListNode*temp=head;
	while(temp->val<val){
		prev=temp;
		temp=temp->next;
	}
	ListNode*n=new ListNode(val);
	n->next=temp;
	prev->next=n;
}

ListNode* insertionSortList(ListNode* head){
	if(head==NULL or head->next==NULL){
		return head;
	}
	ListNode*ans_start=NULL,*ans_tail=NULL;
	while(head){
		insert(ans_start,ans_tail,head->val);
		ListNode*n=head;
		head=head->next;
		delete n;
	}
	return ans_start;
}

int32_t main(){
	qubais_judge;
	IOS;
	ListNode*head=NULL,*tail=NULL;
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		InsertAtTail(head,tail,num);
	}
	ListNode*ans=insertionSortList(head);
	display(ans);
	return 0;   
}