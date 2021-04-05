#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int b;
	int n1;
	int n2;
	cin>>b>>n1>>n2;
	int carry=0;
        int ans=0;
        int i=1;
        while(n1>0 || n2>0 || carry!=0){
            int t1=n1%10;
            int t2=n2%10;
            int sum=t1+t2+carry;
            if(sum>=b){
                ans+=(sum%b)*i;
                carry=sum/b;
            }else{
                ans+=(sum)*i;
                carry=0;
            }
            i=i*10;
            n1=n1/10;
            n2=n2/10;
        }
        cout<<ans<<endl;
	return 0;   
}