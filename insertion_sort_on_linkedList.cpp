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


//an helper function to sort the given
//linkedlist
void sort(node*&sorted,node*head){
if(sorted==NULL){
sorted=new node(head->data);
}
else if(head->data<sorted->data){
node*n=new node(head->data);
n->next=sorted;
sorted=n;
}
else{
node*prev=NULL;
node*temp=sorted;
while(temp!=NULL and head->data>temp->data){
prev=temp;
temp=temp->next;
}
node*n=new node(head->data);
n->next=prev->next;
prev->next=n;
}
}

//here we are writing the insertion sort for linkedlist
node* insertion_sort(node*head){

node*sorted=NULL;

while(head!=NULL){
sort(sorted,head);
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
		}
		else{
			node*n=new node(d);
			temp->next=n;
			temp=n;
		}

	}
	head=insertion_sort(head);
	print(head);
    return 0;
}