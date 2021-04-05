#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//here below we are just calculating the lengths
string str="";
int lcs(string s1,string s2,int i,int j,int dp[][100]){
	if(i==s1.length() or j==s2.length()){
		return 0;

	}
//recursive case if the character matches
	if(dp[i][j]!=0){
   return dp[i][j];
	}
	if(s1[i]==s2[j]){
		str+=s1[i];
		return dp[i][j]=1+lcs(s1,s2,i+1,j+1,dp);
	}
		dp[i][j]=max(lcs(s1,s2,i+1,j,dp),lcs(s1,s2,i,j+1,dp));
	 
	return dp[i][j];
}


//here we have to print also
//with the help of the bottom up approach
//but here its a kind of 2dimensional approach
//here we are using the dynamic thing in the matrix
int lcs(string s1,string s2){
	int n1=s1.length();
	int n2=s2.length();
    vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
    for(int i=1;i<=n1;i++){
    	for(int j=1;j<=n2;j++){
    		if(s1[i-1]==s2[j-1]){
               dp[i][j]=1+dp[i-1][j-1];
    		}else{
    			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    		}

    	}
    }
    vector<char> result;
    int i=n1,j=n2;
    while(i!=0 and j!=0){
           if(dp[i][j]==dp[i][j-1]){
                 j--;
           }
           else if(dp[i][j]==dp[i-1][j]){
           	i--;
           }else{
           	result.push_back(s1[i-1]);
           	i--;
           	j--;
           }
    }
      reverse(result.begin(),result.end());
      for(auto it:result){
       cout<<it;
      }
      cout<<endl;

    return dp[n1][n2];
}

int32_t main(){
	qubais_judge;
	IOS;
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	lcs(s1,s2);
	return 0;    
}