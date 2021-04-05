#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
template<typename T>
class Stack{
private:
queue<T> q1,q2;
public:
	void push(T x){
		q1.push(x);
	}
	void pop(){
		//move first n-1 ele in q2
		//and interchange their names;
		if(q1.empty()){
          return ;
		}
		while(q1.size()>1){
              q2.push(q1.front());
              q1.pop();
		}
		//it removes the last element 
		//which we have to pop out according to the stack
		q1.pop();
		//swap operation
		swap(q1,q2);
	}
int size(){
	return q1.size();
}

bool empty(){
	return size()==0;
}

T top(){
while(q1.size()>1){
q2.push(q1.front());
q1.pop();
}
T ele=q1.front();
q1.pop();
q2.push(ele);
swap(q1,q2);
return ele;
}
};

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	Stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);
	st.push(7);
	while(!st.empty()){
       cout<<st.top()<<endl;
       st.pop();
	}
    return 0;
}