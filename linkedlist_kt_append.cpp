#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};

void print(node*head){
	while(head!=NULL){
      cout<<head->data<<" ";
      head=head->next;
	}

}

void input(node*&head,int num){
	int d;
	cin>>d;
	node*temp=NULL;
	if(head==NULL){
    head=new node(d);
     temp=head;
	}num--;
	while(num--){
     cin>>d;
     node*n=new node(d);
     temp->next=n;
     temp=n;
	}

}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	node*head=NULL,*temp=NULL;
	int num;
	cin>>num;
	input(head,num);
    int k;
    cin>>k;
    
    if(k==0 or k%num==0 ){
    print(head);
    return 0;
    }
    k=k%num;
    node*prev=head,*curr=head;
    int i=1;
    while(i<=(num-k)){
    prev=curr;
    curr=curr->next;
    i++;
    }
    prev->next=NULL;
    temp=curr;
    while(temp->next!=NULL){
    temp=temp->next;
    }
    temp->next=head;
    print(curr);
    return 0;
}