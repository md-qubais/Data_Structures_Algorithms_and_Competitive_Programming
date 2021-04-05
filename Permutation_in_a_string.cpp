#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
 bool checkInclusion(string s1, string s2){
 	unordered_map<char,int> str1;
 	unordered_map<char,int> str2;
 	for(int i=0;i<s1.length();i++){
 		str1[s1[i]]++;
 	}
 	int size=s1.length();
 	int count=0;
 	int start=0;
 	for(int i=0;i<s2.length();i++){
 		str2[s2[i]]++;
 		if(str2[s2[i]]<=str1[s2[i]] and str1[s2[i]]!=0){
 			count++;
 		}
 		//if there is such gap
 		 if(str1[s2[i]]==0 and count>0){
 			count=0;
 			str2.clear();
 		if(str2[s2[i]]<=str1[s2[i]] and str1[s2[i]]!=0){
 			count++;
 		   }
 		   start=i;	
 		   if(count==size){
 		   	return true;
 		}
 		    continue;	
 		}
 		//if it overshoots its value
 		if(str2[s2[i]]>str1[s2[i]] and str1[s2[i]]!=0){
 			
 			while(str2[s2[i]]>str1[s2[i]] or str1[s2[i]]==0){
 				str2[s2[start]]--;
 				start++;
 			}	
 			count=0;
 			for(int j=start;j<=i;j++){
 			if(str2[s2[j]]<=str1[s2[j]] and str1[s2[j]]!=0){
 			count++;
 		   }
 		}
 	      if(count==size){
    		return true;
 		}
 			continue;
 		}
 		if(count==size){
 			return true;
 		} 		
 	}
 	return false;

 }
int32_t main(){
	qubais_judge;
	IOS;
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	cout<<checkInclusion(s1,s2)<<endl;
	return 0;   
}