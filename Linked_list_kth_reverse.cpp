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
void reverse(node*&head,node*p,node*q){
if(head==NULL){
head=p;
p->next=q;
return ;
}
q=p;
p=head;
head=head->next;
p->next=q;
reverse(head,p,q);

}



node* reverse_kth(node*head,int k){
	node*res=NULL;
    while(head!=NULL){
    node*temp=head;
    node*n=temp;
    int i=1;
    while(i<k){
n=n->next;
    	i++;
}
head=n->next;
n->next=NULL;
reverse(temp,NULL,NULL);
if(res==NULL){
res=temp;
}
else {
	node*next=res;
while( next->next!=NULL){
next=next->next;
} 
next->next=temp;
    }
}
return res;
}



int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num,kth;
	cin>>num>>kth;
	node*head=NULL,*temp=NULL;
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

	head=reverse_kth(head,kth);
    print(head);
    return 0;
}