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
    	string arr;
    	cin>>arr;
    	int n=0;
    	int ans=0;
    	for(int i=0;arr[i]!='\0';i++) 
    		{
    			n++;
    		}
    		for(int i=0;i<=n-2;i++){
    			int left_sum=0;
    			int right_sum=0;
    			int k=i;
    			int j=i+1;
    			while(k>=0 and j<n){
    				left_sum+=(arr[k]-'0');
    				right_sum+=arr[j]-'0';
    				if(left_sum==right_sum){
    					 ans=max(ans,(i-k+1)*2);
    				}
    				k--;
    				j++;
    			}
    		}
    		cout<<ans<<endl;
    }
	return 0;   
}