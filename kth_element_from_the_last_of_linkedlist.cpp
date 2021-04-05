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


void print(node*head){
	while(head!=NULL){
 cout<<head->data<<"->";
	head=head->next;
	}
cout<<"NULL";
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
    int k;
    cin>>k;
    int i=1;
    node*temp=head;
   while(i<=k)
    {
    temp=temp->next;
    i++;
    }
    while(temp!=NULL){
    temp=temp->next;
    head=head->next;
    }
    cout<<head->data<<endl;
	return 0;
}
