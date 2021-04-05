#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int ans=0,done;
void n_queen_using_bitmasking(int rowmask,int ld,int rd){
if(rowmask==done){
ans++;
return ;
}
int safe=done & (~(rowmask|ld|rd));
while(safe){
int p=safe & (~ safe);
safe=safe-p;
n_queen_using_bitmasking(rowmask|p,(ld|p)<<1,(rd|p)>>1);
}
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
    done=(1<<n)-1;
    n_queen_using_bitmasking(0,0,0);
    cout<<ans<<endl;
	return 0;     
}