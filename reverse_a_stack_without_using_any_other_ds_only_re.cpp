#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void insert_at_bottom(stack<int>&s,int val){
	if(s.empty()){
		s.push(val);
		return;
	}
	int num=s.top();
	s.pop();
	insert_at_bottom(s,val);
	s.push(num);
}
void Reverse_stack(stack<int>&s){
	if(s.empty()){
		return;
	}
	int num=s.top();
	s.pop();
	Reverse_stack(s);
	insert_at_bottom(s,num);
}
int32_t main(){
	qubais_judge;
	IOS;
	stack<int> s;
	int n;
	cin>>n;
	cout<<"before reversing the stack"<<endl;
	while(n--){
		int num;
		cin>>num;
		s.push(num);
	}
	stack<int> temp=s;
	while(!temp.empty()){
		cout<<temp.top()<<endl;
		temp.pop();
	}
	Reverse_stack(s);
	cout<<"after reversing the stack"<<endl;
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;   
}