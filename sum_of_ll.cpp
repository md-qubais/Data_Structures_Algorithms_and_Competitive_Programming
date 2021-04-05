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



void display(node*head){
	if(head==NULL){
		return ;
	}
	display(head->next);
	cout<<head->val<<" ";
}


void InsertAtHead(node* &head,node* &tail,int val){
	node *n=new node(val);
	if(head==NULL){//if no node present
		head=tail=n;
	}else{// if linkedlist is present
		n->next=head;
		head=n;
	}
}


void helper(node*head1,node*head2,int &r,node*&ans,node*&tail){
	if(head1==NULL and head2!=NULL){
		int num=head2->val+r;
		r=num/10;
		node*n=new node(num%10);
		tail->next=n;
		tail=n;
		helper(head1,head2->next,r,ans,tail);
		return;
	}
	if(head2==NULL and head1!=NULL){
		int num=head1->val+r;
		r=num/10;
		node*n=new node(num%10);
		tail->next=n;
		tail=n;
		helper(head1->next,head2,r,ans,tail);
		return;
	}
	if(head1==NULL and head2==NULL){
		return;
	}
	int num=head1->val+head2->val+r;
	r=num/10;
	node*n=new node(num%10);
	if(ans==NULL){
		ans=tail=n;
	}
	else{
	   tail->next=n;
	   tail=n;
    } 
   helper(head1->next,head2->next,r,ans,tail);
}

node* sum(node*head1,node*head2){
	node*ans=NULL;
	node*tail=NULL;
	int r=0;
	helper(head1,head2,r,ans,tail);
	if(r>0){
		tail->next=new node(r);
	}
	return ans;
}


int32_t main(){
	qubais_judge;
	IOS;
	node*head1=NULL,*tail1=NULL;
	node*head2=NULL,*tail2=NULL;
	int n,m;
	cin>>n>>m;
	while(n--){
		int num;
		cin>>num;
		InsertAtHead(head1,tail1,num);
	}
	while(m--){
		int num;
		cin>>num;
		InsertAtHead(head2,tail2,num);
	}
	node*ans=sum(head1,head2);
	display(ans);
	cout<<endl;
	return 0;
}