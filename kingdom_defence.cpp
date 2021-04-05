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
	int t;
	cin>>t;
	while(t--){
		int w,h,n;
		cin>>w>>h>>n;
		vector<int> x(40000),y(40000);
        for(int i=0;i<n;i++){
          cin>>x[i]>>y[i];
        }
        sort(x.begin(),x.begin()+n);
        sort(y.begin(),y.begin()+n);
        //now calculating delta x and delta y
        int dx=x[0]-1;
        int dy=y[0]-1;
        for(int i=1;i<n;i++){
          dx=max(dx,x[i]-x[i-1]-1);
          dy=max(dy,y[i]-y[i-1]-1);
        }
        dx=max(dx,w-x[n-1]);
        dy=max(dy,h-y[n-1]);
        cout<<dx*dy<<endl;
	}
	return 0;     
}