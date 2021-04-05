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
    int n;
    cin>>n;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    ans^=arr[i];
    }
    cout<<ans<<endl;

    return 0;    
}