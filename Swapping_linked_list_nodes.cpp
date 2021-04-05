#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
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

void insert(node*&head,int d){
	if(head==NULL){
		head=new node(d);
		return;
	}
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	node*n=new node(d);
	temp->next=n;
	return;
}

void print(node*head){
	if(head!=NULL){
		cout<<head->data<<" ";
		print(head->next);
	}
	return;
}

//here below we are assuming
//that the node1 and node2 both are present
//in the linkedlist
//and node1 is less than node2
void swap_nodes(node*&head,int n1,int n2){
	node*t1,*t2;
	t1=t2=head;
	int i=0,j=1;
	while(i<n1){
		t1=t1->next;
		i++;
	}
	while(j<n2){
		t2=t2->next;
		j++;

	}
	//so here in case 1
//if the node 1 is head node
	//and we are checking that if t1->next is t2 or not
if(head==t1  and t1!=t2){
	if(t2->next!=NULL){
      node*temp=t2->next->next;
      t2->next->next=t1->next;
      head=t2->next;
      t2->next=t1;
      t1->next=temp;
      return;
	}
}
	//and if head==t1 and t1 and t2 are adjacent
    if(t1==head and t1==t2){
       head=t2->next;
       node*temp=t2->next->next;
       t2->next->next=t1;
       t1->next=temp;
    	return;
    }
    if(t1==head and t1->next==t2){
      head=t2->next;
      node*temp=t2->next->next;
      t2->next->next=t1->next;
      t2->next=t1;
      t1->next=temp;
     return;
    }

    //and here there are only few test cases
    //are left that is easy if we will concentrate
    //and do that 
    //some another time we will se that ok bye
}


int32_t main(){
	qubais_judge;
	IOS;
	node*head=NULL;
	for(int i=0;i<10;i++){
     insert(head,i);
	}
	//here below before swapping the list nodes
	cout<<"below are the elements before swapping the list nodes"<<endl;
	print(head);
	cout<<endl;
	//here below after swapping the list nodes
    cout<<"below are the elements after swapping the list nodes"<<endl;
    swap_nodes(head,0,2);
    print(head);
	return 0;   
}