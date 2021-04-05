#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<int> frequencySort(vector<int>& nums) {
	map<int,int> m;
	for(int i=0;i<nums[i];i++){
		m[nums[i]]++;
	}
	ve
	

	return ans;
}int32_t main(){
    qubais_judge;
    IOS;
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	cin>>v[i];
    }
    vector<int> ans=frequencySort(v);
    for(int i=0;i<ans.size();i++){
    	cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}