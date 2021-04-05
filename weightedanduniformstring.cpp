#include<bits/stdc++.h>
using namespace std;

vector<string> weightedUniformStrings(string s, vector<int> queries) {
vector<string> res;    
      map<char,int> m;
      char ch='a';
      for(int i=0;i<26;i++){
      m[ch]=i+1;
      ch++;
      }
      int arr[s.length()];
      for(int i=0;i<s.length();i++){
      if(i==0) arr[i]=m[s[i]];
      else{
      	if(s[i-1]==s[i]){
            arr[i]=arr[i-1]+m[s[i]];
      	}else{
      		arr[i]=m[s[i]];
      	}
      }
      }
      sort(arr,arr+s.length());
            for(int i=0;i<queries.size();i++){
              int n=binary_search(arr,arr+s.length(),queries[i]);
              if(n==0){
              res.push_back("No");
              }  else{
              	res.push_back("Yes");
              }
            }


           return res;
}



int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    int num;
    cin>>num;
    vector<int> queries;
    for(int i=0;i<num;i++){
    int key;
    cin>>key;
    queries.push_back(key);
    }
     vector<string> s;
     s=weightedUniformStrings(str,queries);
     for(int i=0;i<s.size();i++){
     cout<<s[i]<<endl;
     }
    return 0;
}