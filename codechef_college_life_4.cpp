#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void solve_this(){
	int N,E,H,A,B,C;
	cin>>N>>E>>H>>A>>B>>C;
	vector<int> res;
	vector<int> t;
	for(int i=0;i<=N;i++){
		t.push_back(i);
	}
	int temp1=0,temp2=0;
	int o,k;
	for(int i=0;i<=N;i++){
		temp1=lower_bound(t.begin(),t.end(),(2*N-E-2*i))-t.begin();
		temp2=upper_bound(t.begin(),t.end(),(H-3*i))-t.begin()-1;
		if(temp2<temp1 or temp1==N+1 ){
			continue;
		}
		if(temp2==N+1 and (temp2+3*i>H)){
			continue;
		}
		if(C>A){
		k=(temp1<(N-i)?temp1:(N-i));

		}
		else{
			k=(temp2<(N-i)?temp2:(N-i));
		}
		o=N-k-i;
		if((k+2*i)>=2*N-E and (k+3*i)<=H){
			res.push_back(A*o+B*i+C*k);

		}
	}
	int ans=1e18;
	if(res.size()==0){
		cout<<"-1"<<endl;
	}else{
		for(auto it:res){
			ans=min(ans,it);
		}
		cout<<ans<<endl;
	}
}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		solve_this();
	}
    return 0;
}