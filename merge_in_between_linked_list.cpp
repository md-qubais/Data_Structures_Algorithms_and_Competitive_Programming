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
		cout<<head->val<<" ";
		display(head->next);
		return;
	}
	cout<<"NULL"<<endl;
}



ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2){
	ListNode*ans=list1;
	ListNode*temp1=list1;
	for(int i=1;i<a;i++){
		temp1=temp1->next;
	}
	ListNode*temp2=temp1;
	for(int i=a;i<=b;i++){
		temp2=temp2->next;
	}
	temp1->next=list2;
	while(list2->next){
		list2=list2->next;
	}
	list2->next=temp2->next;
	return ans;
}


int32_t main(){
	qubais_judge;
	IOS;
	ListNode*head1=NULL,*tail1=NULL,*head2=NULL,*tail2=NULL;
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		InsertAtTail(head1,tail1,num);
	}
	int a,b;
	cin>>a>>b;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		InsertAtTail(head2,tail2,num);
	}
	ListNode*ans=mergeInBetween(head1,a,b,head2);
	display(ans);
	return 0;
}