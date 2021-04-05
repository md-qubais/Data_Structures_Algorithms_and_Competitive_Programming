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

node* merge_list(node* head1,node* head2){
	node*ans=NULL;
	node*tail=NULL; 	
	//cout<<head1->val<<" "<<head2->val<<endl;
    while((head2!=NULL) and (head1!=NULL)){
		if((head1->val)>(head2->val)){
			InsertAtTail(ans,tail,head2->val);
			head2=head2->next;
		}else{
			InsertAtTail(ans,tail,head1->val);
			head1=head1->next;
			}
	}
	while(head1){
		InsertAtTail(ans,tail,head1->val);
		head1=head1->next;
	}
	while(head2){
		InsertAtTail(ans,tail,head2->val);
		head2=head2->next;
	}
	return ans;
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
	int t;
	cin>>t;
	while(t--){
	node*head1=NULL,*tail1=NULL;
	node*head2=NULL,*tail2=NULL;
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		InsertAtTail(head1,tail1,num);
	}
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		InsertAtTail(head2,tail2,num);
	}
	node*ans=merge_list(head1,head2);
	display(ans);
	cout<<endl;
}
	return 0;
}
