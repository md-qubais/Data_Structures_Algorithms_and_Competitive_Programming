#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   

void stock_span(int *price,int n,int *span){
	stack<int> s;//indices of the day
    s.push(0);
    span[0]=1;
    for(int i=1;i<n;i++){
            if(price[i]<price[i-1]){
           span[i]=i-s.top();
           s.push(i);
       }else{
         while(!s.empty() and price[i]>=price[s.top()]){
                     s.pop();
         }
             if(s.empty()==true){
                     s.push(i);
                     span[i]=i+1;
             }else{
                    span[i]=i-s.top();
                    s.push(i);
             }
       }
    }

}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
	int num;
	cin>>num;
	int prices[num];
	for(int i=0;i<num;i++){
     cin>>prices[i];
	}
	int span[num]={0};
    stock_span(prices,num,span);
    for(int i=0;i<num;i++){
     cout<<span[i]<<" ";
    }
    cout<<endl;
}
	return 0;     
}