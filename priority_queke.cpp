#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main()
 {
	//lets code Qubais
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	while(n>0){
	      n--;
	      int num;
	      cin>>num;
	      priority_queue<int,vector<int>,greater<int> > pq;
	
	      for(int i=0;i<num;i++){
	            int no;
	            cin>>no;
	            pq.push(no);
	      }
	      int kth;
	      cin>>kth;
	      
	      int ans=0;
		  while(kth>0){
		  	ans=pq.top();
		  	pq.pop();
		  	kth--;
		  }
		  cout<<ans<<endl;
		  
		  	}
	return 0;
}