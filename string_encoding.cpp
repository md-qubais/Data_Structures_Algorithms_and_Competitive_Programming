#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
/*
    1 -> a
    2 -> b
    3 -> c
    4 -> d
    5->e
    6 f
    7 g
    8 h
    9 i
    10 j
    11 k
    12 l
    13 m
    14 n
    15 o
    16 p
    17 q
    18 r
    19 s
    20 t
    21 u
    22 v 
    23 w
    24 x
    25 -> y
    26 -> z
*/
char ch[]={
	' ','a','b','c','d','e','f','g','h','i','j',
	'k','l','m','n','o','p','q','r','s','t',
	'u','v','w','x','y','z'
};

void printEncoding(string str, string asf){
	if(str.length()==0){
		cout<<asf<<endl;
		return;
	}
	for(int i=0;i<str.length();i++){
		int num=0;
		string temp=str.substr(0,i+1);
		if(temp[0]=='0'){
			return;
		}
		for(int j=0;j<temp.length();j++){
			num=num*10+(temp[j]-'0');
		}
		if(num>26){
			return ;
		}
		printEncoding(str.substr(i+1),asf+ch[num]);
	}
}

int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	if(str[0]=='0'){
		cout<<endl;
		return 0;
	}
	printEncoding(str,"");
	return 0;   
}