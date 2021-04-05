#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void tower(int n,string src,string helper,string des){
	if(n==0){
		return;
	}
	tower(n-1,src,des,helper);
	cout<<"Move "<<n<<"th disc from "<<src<<" to "<<des<<endl;
	tower(n-1,helper,src,des);
}




int32_t main(){
	qubais_judge;
	IOS;	
	int n;
	cin>>n;
	tower(n,"T1","T3","T2");
	cout<<pow(2,n)-1<<endl;
	return 0;   
}