#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
char ch[]={
'a','b','c','d','e','f','g','h', 'i','j',
'k','l','m','n','o','p'
};
void print(string str,int n){
	int s=0;
	int e=15;
	int mid=(e+s)/2;
	int count=1;
	for(int i=0;i<str.length();i++){
		if((i+1)%4==0){
			if(str[i]=='0'){
				cout<<ch[s]<<"";
			}else{
				cout<<ch[e]<<"";
			}
			s=0;
			e=15;
			mid=(e+s)/2;
			continue;
		}
		if(str[i]=='0'){
			e=mid;
			mid=s+(e-s)/2;
		}else{
			s=mid+1;
			mid=s+(e-s)/2;
		}
	}

}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		print(str,n);
		cout<<endl;
	}
	return 0;   
}