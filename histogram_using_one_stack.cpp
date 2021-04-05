#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//and here we have to also try for the corner
//cases such as 
//5 elements
//11 11 10 10 10 
//this is the most useful corner case that you have to do 
//in the mean time  
int histogram(int *arr,int num){
	int res=0;
	stack<int> s;
	int i=0;
	s.push(i);
	for(i=1;i<num;i++){
           while(!s.empty() and arr[i]<arr[s.top()]){
                     int t=s.top();
                     s.pop();
                     if(s.empty()){
                        res=max(res,arr[t]*i);  
                     }else{
                     	res=max(res,arr[t]*(i-s.top()-1));
                     }
           } 
           	s.push(i);
           
	}
	while(!s.empty()){
		res=max(res,arr[s.top()]*(i-s.top()));
		s.pop();
	}
	return res;
}
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
    cin>>arr[i];
	}
	cout<<histogram(arr,num)<<endl;
	return 0;     
}