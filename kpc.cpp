#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

string ch[]={
    ".;",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tu",
    "vwx",
    "yz",
};

void getkpc(string s,string a,vector<string> &ans){
    if(s.length()==0){
        ans.push_back(a);
        return;
    }
    int num=s[0]-'0';
   // cout<<num<<endl;
    string str=ch[num];
    for(int i=0;i<str.length();i++){
        getkpc(s.substr(1),a+str[i],ans);
    }
}


int32_t main(){
    qubais_judge;
    IOS;
    string str;
    cin>>str;
    vector<string> ans;

    getkpc(str,"",ans);
    cout<<"[";
    for(int i=0;i<ans.size()-1;i++){
      cout<<ans[i]<<", ";
   }
    cout<<ans[ans.size()-1]<<"]"<<endl;
    return 0;
}
    