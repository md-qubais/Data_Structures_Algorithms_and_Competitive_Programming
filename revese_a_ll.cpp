#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

class ListNode{
public:
	int val;
	ListNode*next;//self referential pointer
	//node(int val):val(val),next(NULL){}
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


void InsertAtHead_using_node(ListNode*&h1,ListNode*&tail,ListNode*head){
	if(h1==NULL){
		h1=tail=head;
		tail->next=NULL;
		return;
	}else{
		ListNode*temp=h1;
		h1=head;
		h1->next=temp;
		return;
	}
}

void reverse(ListNode*&head){
	ListNode*temp=head;
	ListNode*ans=NULL,*tail=NULL;
	while(head){
		ListNode*temp=head;
		head=head->next;
		InsertAtHead_using_node(ans,tail,temp);
	}
	head=ans;
}
vector<int> nextLargerNodes(ListNode* temp){
	vector<int> ans;
	if(temp==NULL){
		return ans;
	}
	if(temp->next==NULL){
		ans.push_back(0);
		return ans;
	}
	ListNode*head=NULL;
	ListNode*tail=NULL;
	while(temp){
		ListNode*t=temp;
		temp=temp->next;
		InsertAtHead_using_node(head,tail,t);
	}
	stack<int> s;
	tail->next=NULL;
	ans.push_back(0);
	s.push(head->val);
	head=head->next;
	while(head){
		while(!s.empty() and s.top()<=head->val){
			s.pop();
		}
		if(s.empty()==true){
			ans.push_back(0);
			s.push(head->val);
		}else{
			ans.push_back(s.top());
			s.push(head->val);
		}
		head=head->next;
	}
	reverse(ans.begin(),ans.end());
	return ans;
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
	cout<<"Before reversing the linkedlist"<<endl;
	display(head);
	reverse(head);
	cout<<"After reversing the linkedlist"<<endl;
	display(head);
	return 0;
}
