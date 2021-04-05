#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	stack<int> s;
	while(t--){
        int num;
        cin>>num;
        if(num==1){
        	if(!s.empty()){
         	cout<<s.top()<<endl;
        	s.pop();
        }else{
            cout<<"No Code"<<endl;
        }
        }
        else if(num==2){
        	int n;
        	cin>>n;
        	s.push(n);
        }
	}
	return 0;     
}