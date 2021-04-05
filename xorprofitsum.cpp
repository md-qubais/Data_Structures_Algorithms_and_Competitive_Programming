#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    int m=0;
    m=max(m,x^y);
    m=max(m,y^x);
    for(int i=x;i<y;i++){
       m=max(m,i^(i+1));
    }
    cout<<m<<endl;
    return 0;     
}