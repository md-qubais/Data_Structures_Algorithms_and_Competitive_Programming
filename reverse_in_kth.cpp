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

int length(ListNode*head){
	int ans=0;
	while(head){
		ans++;
		head=head->next;
	}
	return ans;
}

void addfirst(ListNode*&head,ListNode*&tail,ListNode*temp){
	if(head==NULL){
		head=tail=temp;
		tail->next=NULL;
	}else{
		ListNode*t=head;
		head=temp;
		head->next=t;
	}
}

ListNode* reverseKGroup(ListNode* head, int k){
	if(length(head)<k){
		return head;
	}
	ListNode*ans_head=NULL,*ans_tail=NULL;
	while(head){
		int n=k;
		ListNode *h1=NULL,*t1=NULL;
		if(ans_head==NULL){
			while(n--){
				ListNode*temp=head;
				head=head->next;
				addfirst(ans_head,ans_tail,temp);
			}
			ans_tail->next=head;
		}else{
			if(length(ans_tail->next)<n){
				return ans_head;
			}
			while(n--){
				ListNode*temp=head;
				head=head->next;
				addfirst(h1,t1,temp);
			}
			ans_tail->next=h1;
			ans_tail=t1;
			ans_tail->next=head;
		}
	}
	return ans_head;
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
	int k;
	cin>>k;
	display(head);
	head=reverseKGroup(head,k);
	display(head);
	return 0;
}
