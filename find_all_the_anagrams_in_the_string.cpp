#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<int> findAnagrams(string s1, string s2) {
        vector<int> ans;
        unordered_map<char,int> str1;
        unordered_map<char,int> str2;
        for(int i=0;i<s2.length();i++){
        	str2[s2[i]]++;
        }
        int size=s2.length();
        int start=0;
        int count=0;
        for(int i=0;i<s1.length();i++){
        	str1[s1[i]]++;
        	if(str1[s1[i]]<=str2[s1[i]] and str2[s1[i]]!=0){
        		count++;
        	}// get break
        	else if(str2[s1[i]]==0){
        		start=i;
        		i=start;
        		count=0;
        		str1.clear();
        	}
        	if(count==size){
        		while(str1[s1[start]]>str2[s1[start]] or str2[s1[start]]==0){
        			str1[s1[start]]--;
        			start++;
        			//count--;
        		}
        		if(i-start+1==size){
        		ans.push_back(start);
        	}
        }

        }
        return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	vector<int> ans=findAnagrams(s1,s2);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;   
}