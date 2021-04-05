#include<bits/stdc++.h>
using namespace std;
string biggerIsGreater(string w) {
string str=w;
reverse(str.begin(),str.end());
if(str==w){
return "no answer";
}
reverse(str.begin(),str.end());
while(str>=w){
str=w;
next_permutation(str.begin(),str.end());
if(str>w){
return str;
}
}


return "no answer";
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0){
     t--;
     string str;
     cin>>str;
     cout<<biggerIsGreater(str)<<endl;
    }
    return 0;
}