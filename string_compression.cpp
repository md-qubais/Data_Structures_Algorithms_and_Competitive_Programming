#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int double
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int compress(vector<char>& chars){
	int count=1;
	int i=0;
	int j=i+1;
	string ans="";
	while(i<chars.size()-1){
		if(chars[i]==chars[j]){
			j++;
			count++;
		}
		else{
			if(count>1){
				string temp="";
			while(count>0){
				temp+=count%10+'0';
				count=count/10;
			}	
			reverse(temp.begin(),temp.end());
			
			ans+=chars[i]+temp;	
			}else{
				ans+=chars[i];
			}
			i=j;
			j++;
			count=1;
		}
		if(j>=chars.size()){
			break;
		}
	}
	if(count>1){
			string temp="";
			while(count>0){
				temp+=count%10+'0';
				count=count/10;
			}	
			reverse(temp.begin(),temp.end());
			
			ans+=chars[i]+temp;	
			
	}else{
		ans+=chars[i];
	}
	chars.erase(chars.begin(),chars.end());
	for(int i=0;i<ans.length();i++){
		chars.push_back(ans[i]);
	}
	return chars.size();
}
int32_t main(){
    qubais_judge;
    IOS;    
    int n;
    cin>>n;
    vector<char> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    cout<<compress(v)<<endl;
    return 0;
}
