#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	int k;
	cin>>num>>k;
	//max heap
	priority_queue<int> pq;
	int c=0;
	for(int i=0;i<num;i++){
           int q;
           cin>>q;
           if(q==1){
           	int n1,n2;
           	cin>>n1>>n2;
                 if(c<k){
                 pq.push((n1*n1)+(n2*n2));
                 c++;
                   }else{
                      if((n1*n1)+(n2*n2)<pq.top()){
                             pq.pop();
                             pq.push((n1*n1)+(n2*n2));
                      }
                   }
           }else{                  
           	cout<<pq.top()<<endl;      
           }
	}
	return 0;     
}