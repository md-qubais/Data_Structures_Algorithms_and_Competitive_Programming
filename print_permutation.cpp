#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void printPermutations(string str, string asf){
    if(str.length()==0){
    	cout<<asf<<endl;
    	return;
    }
    for(int i=0;i<str.length();i++){
    	swap(str[i],str[0]);
    	printPermutations(str.substr(1),asf+str[0]);
    	//swap(str[i],str[0]);
    }

}

int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	printPermutations(str,"");
	return 0;   
}