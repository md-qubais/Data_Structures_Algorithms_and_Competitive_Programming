#include<bits/stdc++.h>
using namespace std;
int m(int a,int b){
if(b==0){
return 0;
}
if(b==1){
	return a;
}

return a+m(a,b-1);
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    cout<<m(a,b)<<endl;
    return 0;
    }    