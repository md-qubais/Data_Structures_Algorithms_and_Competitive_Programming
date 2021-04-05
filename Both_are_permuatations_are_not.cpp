#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool ispermutation(char *a,char *b){
	int f1[26]={0};
	for(int i=0;a[i]!='\0';i++){
		f1[a[i]-'a']++;
	}
	for(int i=0;b[i]!='\0';i++){
		f1[b[i]-'a']--;
	}/*
	//fail attemp of my 
	// i am too fast understimating the algo
	for(int i=0;i<26;i++){
		if(f1[i]%2!=0){
			return false;
		}
	}*///it should be like below one
		for(int i=0;i<26;i++){
			if(f1[i]!=0){
				return 0;
			}
		}

	return true;
}



int32_t main(){
	qubais_judge;
	IOS;
	char ch1[100];
	char ch2[100];
	cin>>ch1>>ch2;
	if(ispermutation(ch1,ch2)){
		cout<<"yes";
		return 0;
	}
	cout<<"no";

	return 0;   
}