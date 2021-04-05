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
int length(ListNode*head){
	int ans=0;
	while(head){
		ans++;
		head=head->next;
	}
	return ans;
}
ListNode* merge(ListNode*a,ListNode*b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	if(a->val<b->val){
		a->next=merge(a->next,b);
		return a;
	}
	b->next=merge(a,b->next);
	return b;
}



void display(ListNode*head){
	if(head){
		cout<<head->val<<"->";
		display(head->next);
		return;
	}
	cout<<"NULL"<<endl;
}



ListNode* sortList(ListNode* head){
	int s=0;
	int e=length(head)-1;
	int mid=(s+e)/2;
	if(s<e){
		ListNode*a=head;
		ListNode*temp=head;
		int n=mid;
		for(int i=1;i<=mid;i++){
			temp=temp->next;
		}
		ListNode*b=temp->next;
		temp->next=NULL;
		a=sortList(a);
		b=sortList(b);
		ListNode*ans=merge(a,b);
		return ans;
	}
	return head;
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
	cout<<"linkedlist before sorting:"<<endl;
	display(head);
	cout<<"linkedlist after sorting:"<<endl;
	head=sortList(head);
	display(head);
	return 0;
}