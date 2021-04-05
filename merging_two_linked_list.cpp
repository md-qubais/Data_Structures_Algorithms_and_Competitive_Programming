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

node* merge(node*a,node*b){
	if(a==NULL){
   return b;
	}
	if(b==NULL){
   return a; 
	}
	node *c=NULL;
	if(a->data<b->data){
     c=a;
     c->next=merge(a->next,b);
	}else{
	c=b;
	c->next=merge(a,b->next);
	}
return c;
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
		node*first=NULL,*second=NULL;
		int num1,num2;
		cin>>num1;
		node*temp1=NULL,*temp2=NULL;
		for(int i=0;i<num1;i++){
          int d;
          cin>>d;
          if(first==NULL){
          	first=new node(d);
          	temp1=first;
          }else{
          	node*n=new node(d);
          	temp1->next=n;
          	temp1=n;
          }
		}
           cin>>num2;
           for(int i=0;i<num2;i++){
          int d;
          cin>>d;
          if(second==NULL){
          	second=new node(d);
          	temp2=second;
          }else{
          	node*n=new node(d);
          	temp2->next=n;
          	temp2=n;
          }
		}
     node*m=merge(first,second);
     print(m);
     cout<<endl;
	}

	return 0;     
}