#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Stack{
public:
	stack<int> s;
    int Min;
    int size() {
      // write your code here
    	return s.size();
    }
    void push(int val) {
      // write your code here
    	if(s.empty()){
    		s.push(val);
    		Min=val;
    		return;
    	}
    	if(val>=Min){
    		s.push(val);
    		return;
    	}
    	if(val<Min){
    		s.push(val+val-Min);
    		Min=val;
    		return;
    	}
    }
    void display(){
    	stack<int> s1=s;
    	while(!s1.empty()){
    		cout<<s1.top()<<" ";
    		s1.pop();
    	}
    }
    int pop() {
      // write your code here
    	if(s.empty()){
    		return -1;
    	}
    	if(s.top()>=Min){
    		int val=s.top();
    		s.pop();
    		return val;
    	}
    	int val=Min;
    	int num=2*Min-s.top();
    	Min=num;
    	s.pop();
    	return val;
    }

    int top() {
      // write your code here
    	if(s.empty()){
    		return -1;
    	}
    	if(s.top()>=Min){
    		int val=s.top();
    		return val;
    	}
    	return Min;
    }

    int min() {
      // write your code here
    	if(s.empty()){
    		return -1;//10 20 5 8 2 
    	}
    	if(s.size()==1){
    		return s.top();
    	}
    	return Min;
    }
};
int32_t main(){
	qubais_judge;
	IOS;
	Stack st;
	while(true){
		string s;//10 20 5 8 2 
		cin>>s;
		if(s=="top"){
			cout<<st.top()<<endl;
		}
		if(s=="quit"){
			break;
		}
		if(s=="push"){
			int val;
			cin>>val;
			st.push(val);
		}
		if(s=="size"){
			cout<<st.size()<<endl;
		}
		if(s=="pop"){
			int val=st.pop();
			if(val==-1){
				cout<<"Stack underflow"<<endl;
			}
			else cout<<val<<endl;
		}
		if(s=="min"){
			int val=st.min();
			if(val==-1){
				cout<<"Stack underflow"<<endl;
			}
			else cout<<val<<endl;
		}
	}
	return 0;
}