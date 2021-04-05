#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int double
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
 		if( str1[s2[i]]!=0){
 			count++;
 		}
 		//if there is gap
 		 if(str1[s2[i]]==0 and count>0){
 			count=0;
 			str2.clear();
 			if(str2[s2[i]]<=str1[s2[i]] and str1[s2[i]]!=0){
 			count++;
 		}

 		}	
 		//if there is extra hit
 		 if(str2[s2[i]]>str1[s2[i]]  and str1[s2[i]]!=0){
 			while(str2[s2[start]]>str1[s2[start]] or str2[s2[i]]==0){
 				if( str2[s2[start]]>str1[s2[start]] and str1[s2[start]]!=0){
 					cout<<count<<endl;
 					count--;
 				}
 				str2[s2[start]]--;
 				start++;
 			}
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
