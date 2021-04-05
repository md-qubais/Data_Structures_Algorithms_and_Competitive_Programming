#include<bits/stdc++.h>
#include "Stack.h"
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	Stack<string> s;
	s.push("mohammed qubaisuddin");
	s.push("mohammed abdul hameed");
	s.push("mohammed abdul imad");
	s.push("mohammed Mansoor hussin shareef");
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;   
}