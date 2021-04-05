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


bool detect_cycle(node*&head,int d){
node*temp=head;
while(temp!=NULL){
if(temp->data==d){
return true;
}
temp=temp->next;
}
return false;
}
   
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	node*head=NULL;
	int d;
	cin>>d;
	node*temp=NULL;
	while(d!=-1){
     if(head==NULL){
     	head=new node(d);
     	temp=head;
     }else{

       if(detect_cycle(head,d)){
            temp->next=NULL;
              break;
       }
       node*n=new node(d);
       temp->next=n;
       temp=n;
     }
     cin>>d;
	}
	print(head);
	return 0;     
}
