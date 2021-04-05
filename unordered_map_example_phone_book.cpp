#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	unordered_map<string,vector<string>> phone_book;
	phone_book["qubais"].push_back("987654321");
	phone_book["qubais"].push_back("7780615162");
	phone_book["imad"].push_back("8885892805");
	for(auto it:phone_book){
		cout<<it.first<<"->";
		for(auto i:it.second){
			cout<<i<<",";
		}
		cout<<endl;
	}
	cout<<endl;
	//like this we can print the phone number on a 
	//particular name
	/*vector<string> v=phone_book["qubais"];
	for(auto it:v){
		cout<<it<<endl;

	}*/
	string sname="qubais";
	if(phone_book.count(sname)==0){
		cout<<"The given number is not there"<<endl;
	}else{
		for(string s:phone_book["qubais"]){
			cout<<s<<endl;
		}
	}
	return 0;     
}