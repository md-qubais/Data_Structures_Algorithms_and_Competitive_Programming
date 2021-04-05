#include<bits/stdc++.h>
using namespace std;
string pangrams(string s) {
string res="pangram";
int arr[28]={0};
for(int i=0;i<s.length();i++){
 char ch=s[i];
 if(ch==' '){
  arr[ch-5]++;
 }else if(ch>=65&&ch<=90){
 	arr[ch-64]++;
 }
 	else{
arr[ch-96]++;
 }
}
for(int i=1;i<28;i++){
if(arr[i]==0){
res="not pangram";
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
    getline(cin,str);
    str=pangrams(str);
    cout<<str<<endl; 
    return 0;
}
