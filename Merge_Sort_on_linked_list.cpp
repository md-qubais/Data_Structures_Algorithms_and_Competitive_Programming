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
 cout<<head->data<<"->";
	head=head->next;
	}
cout<<"NULL";
}

void input(node*&head){
	int d;
	cin>>d;
	head=new node(d);
	node*temp=head;
	cin>>d;
	while(d!=-1){
    node*n=new node(d);
    temp->next=n;
    temp=n;
    cin>>d;
	}
}

node* midpointqubais(node*head){
if(head==NULL or head->next==NULL){
return head;
}
node*runner=head;
while(runner!=NULL){
runner=runner->next;
if(runner==NULL or runner->next==NULL){
break;
}
runner=runner->next;
head=head->next;
}
return head;
}


node* merge(node*head1,node*head2){
	node*c=NULL;
	if(head1==NULL){
 return head2;
	}
	if(head2==NULL){
  return head1;
	}
  if(head1->data < head2->data){
          c=head1;
          c->next=merge(head1->next,head2);
  }
  else{
 c=head2;
 c->next=merge(head1,head2->next);
  }
return c;
}

node* merge_sort(node*&head){
if(head==NULL or head->next==NULL){
return head;
}
node*mid=midpointqubais(head);
node*a=head;
node*b=mid->next;
mid->next=NULL;
a=merge_sort(a);
b=merge_sort(b);
node*c=merge(a,b);
return c;
}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	node*head=NULL;
	input(head);
	cout<<"The linkedlist before sorting"<<endl;
	print(head);
 	cout<<"The linkedlist after sorting"<<endl;
	node*c=merge_sort(head);
	print(c);
	return 0;     
}