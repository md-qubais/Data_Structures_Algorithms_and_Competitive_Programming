#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;

void rev_insert(int num,stack<int> &s){
	if(s.empty()==true){
		s.push(num);
		return ;
	}
	int no=s.top();
	s.pop();
	rev_insert(num,s);
    s.push(no);
}


void rev_stack(stack<int> &s){
	if(s.size()==1){
      return ;
	}
	int num=s.top();
	s.pop();
    rev_stack(s);
    rev_insert(num,s);
}   

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	stack<int> s;
	while(num--){
		int n;
		cin>>n;
        s.push(n);
	}
	rev_stack(s);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;     
}