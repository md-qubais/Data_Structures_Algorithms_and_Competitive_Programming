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
void k_th_append(node*&head,node*&tail,int k,int len){
	if(k==0){
		return;
	}
	int n=len-k;
	node*temp=head;
	node*dummy=head;
	for(int i=1;i<n;i++){
		temp=temp->next;
	}
	head=temp->next;
	temp->next=NULL;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=dummy;
}


int32_t main(){
	qubais_judge;
	IOS;
	node*head=NULL,*tail=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		InsertAtTail(head,tail,num);
	}
	int k;
	cin>>k;
	k=k%n;
	k_th_append(head,tail,k,n);
	display(head);
	return 0;
}