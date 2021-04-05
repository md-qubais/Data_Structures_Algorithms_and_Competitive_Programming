#include<bits/stdc++.h>
using namespace std;
string morganAndString(string a, string b) {
string res="";
int i=0,j=0;
while(i<a.length()&&j<b.length()){
if(a[i]>b[j]){
res=res+b[j++];
}else{
	res=res+a[i++];
}
}
while(i<a.length()){
res=res+a[i++];
}
while(j<b.length()){
res=res+b[j++];
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
    int n;
    cin>>n;
    cin.get();
    while(n>0){
    n--;
    string str1,str2;
    cin>>str1;
    cin.get();
    cin>>str2;
    string res=morganAndString(str1,str2);
    cout<<res<<endl;
    }
    return 0;
    }