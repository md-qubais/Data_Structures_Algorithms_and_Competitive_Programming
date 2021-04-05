#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

class Node{
public:
	int data;
	Node*next;
	Node(int val){
		data=val;
		next=NULL;
	}
};

class Stack{
public:
	Node*head=NULL;
	Node*tail=NULL;
	int s=0;
	int peek(){
		if(head==NULL){
			return -1;
		}else return head->data;
	}
	void display(){
		Node*temp=head;
		while(temp){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
	int add(int val){
		s++;
		if(head==NULL){
		
			Node *n=new Node(val);
			head=tail=n;
		}else{
			
			Node*n=new Node(val);
			tail->next=n;
			tail=n;
		}
	}
	int remove(){
		if(head==NULL){
			return -1;
		}
		s--;
		int val=head->data;
		head=head->next;
		return val;
	}
	int size(){
		return this->s;
	}
};

int32_t main(){
	qubais_judge;
	IOS;
	Stack st;
	while(true){
		string s;
		cin>>s;
		if(s=="quit"){
			break;
		}
		if(s=="add"){
			int val;
			cin>>val;
			st.add(val);
		}
		if(s=="remove"){
			int val=st.remove();
			if(val==-1){
				cout<<"Queue underflow"<<endl;
			}else cout<<val<<endl;
		}
		if(s=="peek"){
			int val=st.peek();
			if(val==-1){
				cout<<"Queue underflow"<<endl;
			}else cout<<val<<endl;
		}
		if(s=="size"){
			cout<<st.size()<<endl;
		}
	}
	return 0;
}