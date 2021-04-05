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
void reverse_k(node*&head,node*&tail,int k){
	

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
	reverse_k(head,tail,k);
	display(head);
	return 0;
}
