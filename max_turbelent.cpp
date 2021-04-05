#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int maxTurbulenceSize(vector<int>& arr){
	int ans=0;
	int just_max=1;
	if(arr.size()==1){
		return 1;
	}
	if(arr.size()<2){
		return 1;
	}
	int temp=0;
	for(int i=0;i<arr.size()-1;i++){
		if(arr[i]==arr[i+1]){	
			ans=max(just_max,ans);
			just_max=1;
			temp=(temp+1)%2;
			//cout<<i<<" "<<temp<<" "<<ans<<endl;
			continue;
		}
		if((i)%2==0 and temp%2==0){
			if(arr[i]>arr[i+1]){
				just_max++;
				continue;
			}else{
				ans=max(just_max,ans);
				just_max=1;
				temp=(temp+1)%2;
				i--;
				continue;
			}
		} if((i)%2!=0 and temp%2==0){
			if(arr[i]<arr[i+1]){
				just_max++;
				continue;
			}else{
				ans=max(just_max,ans);
				temp=(temp+1)%2;
				just_max=1;
				i--;
				continue;
			}
		}
	    if((i)%2==0 and temp%2!=0){
	    if(arr[i]<arr[i+1]){
				just_max++;
				continue;
			}else{
				ans=max(just_max,ans);
				temp=(temp+1)%2;
				just_max=1;
				i--;
				continue;
			}	
		} if((i)%2!=0 and temp%2!=0){
			if(arr[i]>arr[i+1]){
				just_max++;
				continue;
			}else{
				ans=max(just_max,ans);
				temp=(temp+1)%2;
				just_max=1;
				i--;
				continue;
			}
		}
	}
	ans=max(ans,just_max);
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<maxTurbulenceSize(v)<<endl;
	return 0;   
}