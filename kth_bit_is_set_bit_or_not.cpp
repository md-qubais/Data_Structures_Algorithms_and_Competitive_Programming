#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
string kth_bit(int num,int k){
	int bitmask=1<<k;
	if(bitmask&num){
 return "Yes";
	}
return "No";
}
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		int bit;
		cin>>bit;
		cout<<kth_bit(num,bit)<<endl;

	}
	return 0;     
}