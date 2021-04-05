#include<bits/stdc++.h>

#include "node.h"
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
template<typename T>
class Stack{
private:
	node<T>*head;
	int len;
public:
	Stack(){
		head=NULL;
		len=0;
	}
	T top(){
		return head->val;
	}
	void pop(){
		len--;
		node<T>*n=head;
		head=head->next;
		delete n;
	}
	void push(T val){
		len++;
		if(head==NULL){
			head=new node<T>(val);
		}else{
			node<T>*n=new node<T>(val);
			n->next=head;
			head=n;
		}
	}
	int empty(){
		return len==0;
	}
	int size(){
		return len;
	}
};


