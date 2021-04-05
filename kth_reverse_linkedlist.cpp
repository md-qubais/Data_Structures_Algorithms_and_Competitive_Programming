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
	if(head==NULL){
		return;
	}

		cout<<(*head).val<<" ";
		display(head->next);

}

node* help(node*head,node*&tail,int k){
	int n=k;
	node*temp_var=head;
	int t=k;
	while(temp_var){
		t--;
		temp_var=temp_var->next;
	}
	if(t>0){
		return head;
	}
	node*r=NULL;
	node*c=NULL;
	node*temp=head;
	tail=head;
	while(n--){
		c=temp;
		temp=temp->next;
		c->next=r;
		r=c;
	}
	head=c;
	tail->next=temp;

	return head;
}

node* reverse(node*&head,int k){
	if(k==0){
		return head;
	}
	node*tail=NULL;
	node*ans=help(head,tail,k);
	node*prev=tail;
	tail=tail->next;
	while(tail){
	node*n=help(tail,tail,k);
	prev->next=n;
	prev=tail;
	tail=tail->next;
  }

	return ans;
}



int32_t main(){
	qubais_judge;
	IOS;
	node*head=NULL,*tail=NULL;
	int n,k;
	cin>>n>>k;
	while(n--){
		int num;
		cin>>num;
		InsertAtTail(head,tail,num);
	}
	node*ans=reverse(head,k);
	display(ans);
	cout<<endl;
	return 0;
}