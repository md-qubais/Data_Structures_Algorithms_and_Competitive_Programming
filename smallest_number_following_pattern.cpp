#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	stack<int> s;
	int num=1;
	for(int i=0;i<str.length();i++){
		if(str[i]=='d'){
			s.push(num);
			num++;
			continue;
		}
		if(str[i]=='i'){
			s.push(num);
			num++;
			while(!s.empty()){
				cout<<s.top()<<"";
				s.pop();
			}
		}
	}
	s.push(num);
	while(!s.empty()){
		cout<<s.top()<<"";
		s.pop();
	}
	return 0;
}