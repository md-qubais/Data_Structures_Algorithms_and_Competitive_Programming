#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int k;
		cin>>k;
		int count=0;
		int s=0;
		int e=s;
		int f[27]={0};
		int Max=-1;

		while(e<str.length()){
			if(f[str[e]-'a']==0){
				count++;
			}
			f[str[e]-'a']++;
			while(count>k){
				f[str[s]-'a']--;
				if(f[str[s]-'a']==0){
					count--;
				}
				s++;
			}
			if(count==k){
				Max=max(Max,e-s+1);
			}
			e++;
		}
		cout<<Max<<endl;
	}
	return 0;   
}