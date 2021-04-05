#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Queue{
stack<int> s1,s2;
public:
	void push(int i){
		s1.push(i);
	}
    void pop(){
    if(size()>0){
    	while(s1.size()>1){
                 s2.push(s1.top());
                 s1.pop();  
    	}
    	s1.pop();
    	while(!s2.empty()){
               s1.push(s2.top());
               s2.pop();
    	}
    }
}
    int top(){
    	if(size()>0){
                while(s1.size()>1){
                    s2.push(s1.top());
                    s1.pop();
                }
                int ele=s1.top();
                s1.pop();
                s2.push(ele);
                 while(!s2.empty()){
                        s1.push(s2.top());
                        s2.pop();
                 }
                return ele;
    }
    return -1;
}

	int size(){
		return s1.size();
	}
	bool empty(){
		return size()==0;
	}

};

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3); 
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    while(!q.empty()){
       cout<<q.top()<<endl;
       q.pop();
    }
    return 0;
}