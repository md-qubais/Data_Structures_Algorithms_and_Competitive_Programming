#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string ans[1000000];
int k=0;
void permutate(string str,int i){
	if(str[i]=='\0'){
			ans[k++]=str;
		return;
	}
	for(int j=i;str[j]!='\0';j++){
		if(i!=j and str[i]==str[j]){

		}else{
		swap(str[i],str[j]);
		permutate(str,i+1);
		swap(str[i],str[j]);
	}
}

}


int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	permutate(str,0);
	sort(ans,ans+k);
	cout<<ans[0]<<endl;
	string temp=ans[0];
	for(int i=1;i<k;i++){
		if(ans[i]!=temp){
			cout<<ans[i]<<endl;
			temp=ans[i];
		}
	}
	return 0;   
}