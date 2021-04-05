#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int do_a(string str,int n){
	int ans=0;
	int count=0;
	int s=0;
	int i=0;
	for(i=0;i<str.length();i++){
		if(str[i]=='b'){
			count++;
		}
		if(count>n){
			ans=max(ans,i-s);
			while(count>n){
				if(str[s]=='b'){
					count--;
				}
				s++;
			}
		}
		if(i==str.length()-1 and count<=n){
			ans=max(ans,i-s+1);
		}
	}
	return ans;
}

int do_b(string str,int n){
int ans=0;
	int count=0;
	int s=0;
	int i=0;
	for(i=0;i<str.length();i++){
		if(str[i]=='a'){
			count++;
		}
		if(count>n){
			ans=max(ans,i-s);
			while(count>n){
				if(str[s]=='a'){
					count--;
				}
				s++;
			}
		}
		if(i==str.length()-1 and count<=n){
			ans=max(ans,i-s+1);
		}
	}
	return ans;	

}



int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	string str;
	cin>>str;
	cout<<do_a(str,n)<<endl;
	return 0;   
}