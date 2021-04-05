#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<vector<int>> threeSum(vector<int>&v) {
	vector<int> ans(3);
	int c_count=0;
    vector<vector<int>> res;
    if(v.size()<3){
    	return res;
    }
    //now find if array has only three numbers
    bool b=false;
    set<vector<int>> s;
    set<int> temp;
    for(int i=0;i<v.size();i++){
    	if(v[i]==0){
    		c_count++;
    	}
    	temp.insert(v[i]);
    	if(v[i]!=0){
    		b=true;
    	}
    }
    if(temp.size()==3){
    	int k=0;
    	int sum=0;
    	for(auto it:temp){
    		ans[k++]=it;
    		sum+=it;
    	}
    	if(sum==0){
    		if(c_count>=3){
    			s.insert({0,0,0});
    		}
    		s.insert(ans);
    	}
    	for(auto it:s){
    		res.push_back(it);
    	}
    	return res;
    }
    if(b==false){
    	ans[0]=0;
    	ans[1]=0;
    	ans[2]=0;
    	res.push_back(ans);
    	return res;
    }
    //sort(v.begin(),v.end());
    
    unordered_map<int,pair<int,int>> m;
    for(int i=0;i<v.size();i++){
    	m[v[i]]=make_pair(v[i],i);
    }
    int i=0;
    int j=i+1;
    while(i<v.size()-2){
    	if(j>=v.size()-1){
    		i++;
    		j=i+1;
    	}
    	if(m.find(-(v[i]+v[j]))!=m.end() and m[-(v[i]+v[j])].second!=i and m[-(v[i]+v[j])].second!=j ){
    		ans[0]=v[i];
    		ans[1]=v[j];
    		ans[2]=-(v[i]+v[j]);
    		sort(ans.begin(),ans.end());
    		s.insert(ans);
    	}
    	j++;
    }
    for(auto it:s){
    	res.push_back(it);
    }
    return res;
}


int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> res(n);
	for(int i=0;i<n;i++){
		cin>>res[i];
	}
	vector<vector<int>> ans=threeSum(res);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[0].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}