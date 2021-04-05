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
void display(node*head){
	while(head){
		cout<<head->val<<" ";
		head=head->next;
	}
	cout<<endl;
}
void arrange(node*&head,node*&tail){
	if(head==NULL){
		return;
	}
	if(head->next==NULL){
		return ;
	}
	node*odd_start=head;
	node*even_start=head->next;
	node*even=even_start;
	node*odd=odd_start;
	while(odd){
		if(odd->next==NULL){
			odd->next=even_start;
			break;
		}
		node*n=odd->next->next;
		odd->next=n;
		if(odd->next==NULL){
			odd->next=even_start;
			break;
		}
		odd=n;
		even->next=odd->next;
		even=odd->next;
	}
}
int32_t main(){
	qubais_judge;
	IOS;
	node*head=NULL,*tail=NULL;
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		InsertAtTail(head,tail,num);
	}
	cout<<"Original List"<<": ";
	display(head);
	arrange(head,tail);
	cout<<"Modified List"<<": ";
	display(head);
	return 0;
}