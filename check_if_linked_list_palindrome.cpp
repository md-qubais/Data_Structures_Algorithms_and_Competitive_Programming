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


bool palindrome_check(node*temp,stack<node*> &st){
while(!st.empty() and temp!=NULL){
if(st.top()->data!=temp->data){
return false;
}
st.pop();
temp=temp->next;
}


	return true;
}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	node*head=NULL;
	int num;
	cin>>num;
	node*temp=NULL;
	for(int i=0;i<num;i++){
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
	stack<node*> st;
	temp=head;
	while(temp!=NULL){
           st.push(temp);
           temp=temp->next;
	}
	temp=head;
	if(palindrome_check(temp,st)){
     cout<<"true"<<endl;
	}else cout<<"false"<<endl;
    return 0;
}