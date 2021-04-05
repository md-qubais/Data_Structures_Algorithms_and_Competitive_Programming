#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
template<typename T>
class Stack{
private:
	vector<T> v;
public:
	T top(){
		return v[v.size()-1];
	}
	void pop(){
		v.pop_back();
	}
	bool empty(){
		return v.size()==0;
	}
	void push(T val){
		v.push_back(val);
	}
	int size(){
		return v.size();
	}
};
int32_t main(){
	qubais_judge;
	IOS;
	Stack<char> s;
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;   
}