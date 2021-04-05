#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;  

void queue_using_two_stacks(int num){
	stack<int> s1,s2;
	for(int i=0;i<num;i++){
          s1.push(i);
	}
	while(!s1.empty()){
           s2.push(s1.top());
           s1.pop();
	}
	while(!s2.empty()){
            cout<<s2.top()<<" ";
            s2.pop();
	}

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
	queue_using_two_stacks(num);
	cout<<endl;
	return 0;     
}