#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool get_vowel(char ch){
	if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'){
		return true;
	}
	return false;
}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	string str;
	getline(cin,str);
	int count=1;
	char ch[1000];
	strcpy(ch,str.c_str());
	string res="";
	char *c=strtok(ch," ");
	while(c!=NULL){
		if(get_vowel(c[0])){
              res=res+c;
		}else{
            res=res+(c+1);
            res=res+c[0];
		}
		res=res+'d';
		c=strtok(NULL," ");
		
		for(int i=0;i<count;i++){
       res=res+'u';
		}
		res=res+" ";
		count++;
	}
	cout<<res<<endl;
	return 0;     
}