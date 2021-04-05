#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void permutation(string str,int i){
	if(str[i]=='\0'){
		cout<<str<<" ";
		return;
	}
	for(int j=i;str[j]!='\0';j++){
		swap(str[j],str[i]);
		permutation(str,i+1);
		swap(str[j],str[i]);
	}
}
int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	permutation(str,0);
	cout<<endl;
	return 0;   
}