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

void sort_them(node*&sorted,int d){
	node*temp=sorted;
	if(sorted==NULL){
  sorted=new node(d);
  return ;
	}
	node*prev=NULL;
	if(d==1 or d%2!=0){
	while(temp!=NULL and (temp->data)%2!=0){
	prev=temp;
	temp=temp->next;
	}
   node*n =new node(d);
   n->next=prev->next;
   prev->next=n;

}else{
while(temp->next!=NULL){
temp=temp->next;
}
node*n=new node(d);
temp->next=n;
}

}


node* even_odd(node*head){
	node*sorted=NULL;
    while(head!=NULL){
    	sort_them(sorted,head->data);
    	head=head->next;
    }

	return sorted;
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	node*head=NULL;
	node*temp=NULL;
	while(num--){
     int d;
     cin>>d;
     if(head==NULL){
     	head=new node(d);
        temp=head;
     }else{
         node*n=new node(d);
         temp->next=n;
         temp=n;
     }
	}
	node*even_after_odd=even_odd(head);
	print(even_after_odd);
	cout<<endl;
	return 0;     
}