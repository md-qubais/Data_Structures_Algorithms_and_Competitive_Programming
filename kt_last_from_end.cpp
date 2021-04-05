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
int k_th(node*&head,node*&tail,int k){
	node*temp1=head;
	while(k--){
		temp1=temp1->next;
	}
	node*temp2=head;
	while(temp1){
		if(temp1){
			temp1=temp1->next;
			temp2=temp2->next;
		}else{
			break;
		}
	}
	return temp2->val;
}


int32_t main(){
	qubais_judge;
	IOS;
	node*head=NULL,*tail=NULL;
	while(true){
		int num;
		cin>>num;
		if(num==-1){
			break;
		}
		InsertAtTail(head,tail,num);
	}
	int k;
	cin>>k;
	cout<<k_th(head,tail,k)<<endl;
	return 0;
}