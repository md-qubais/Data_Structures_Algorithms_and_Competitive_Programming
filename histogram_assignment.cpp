#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"

using namespace std;   
int get_histogram(int *arr,int num){
int res=0;
//s1 stack is for indices and s2 stack is for heights
stack<int> s1,s2;
s1.push(0);
s2.push(arr[0]);
int i=0;
for( i=1;i<num;i++){
	int x=i;
while(!s2.empty() and s2.top() > arr[i]) {
res=max(res,s2.top()*(i-s1.top()));
s2.pop();
if(arr[s1.top()] > arr[i]){
x=s1.top();
s1.pop();
}
}
s1.push(x);
s2.push(arr[i]);
}

while(!s1.empty() and !s2.empty()){
res=max(res,s2.top()*(i-s1.top()));
s1.pop();
s2.pop();
}
	return res;
}

int32_t main() {
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
          cin>>arr[i];
	}
	cout<<get_histogram(arr,num)<<endl;
	return 0;     
}