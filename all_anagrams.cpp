#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<int> findAnagrams(string s1, string s2) {
	vector<int> ans;
	int freq1[27]={0};
	int freq2[27]={0};
	for(int i=0;i<s2.length();i++){
	freq2[s2[i]-'a']++;
	}
	
	int start=0;
	int count=0;
	for(int i=0;i<s1.length();i++){
		if(freq2[s1[i]-'a']==0){
			start=i+1;
			count=0;
			for(int i=0;i<27;i++){
				freq1[i]=0;
			}
			continue;
		}
		freq1[s1[i]-'a']++;
		if(freq1[s1[i]-'a']<=freq2[s1[i]-'a'] and freq2[s1[i]-'a']!=0){
			count++;
		}
		if(count==s2.length()){
			while(freq1[s1[start]-'a']>freq2[s1[start]-'a']){
				freq1[s1[start]-'a']--;
				start++;
			}
			if(i-start+1==s2.length()){
				ans.push_back(start);
			}
			//count=0;
		}

	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;	
	vector<int> ans=findAnagrams(s1,s2);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;   
}