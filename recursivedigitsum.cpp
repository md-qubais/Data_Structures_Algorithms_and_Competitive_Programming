#include<bits/stdc++.h>
using namespace std;
string getnum(string str){

string res="";
int num=0;
for(int i=0;i<str.length();i++){
char ch=str[i];
num=num+(ch-'0');
}
res=to_string(num);
return res;
}

//its very time consuming technique
//we need to come up with some better 
//and optimized approach

int superDigit(string n, int k) {
int res=0;
string str=n;
for(int i=1;i<k;i++){
str=str+n;
}
while(str.length()>1){
str=getnum(str);
}
res=str[0]-'0';

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
    int n;
    cin>>n;
    n=superDigit(str,n);
    cout<<n<<endl;
    return 0;
}