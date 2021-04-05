#include<bits/stdc++.h>
#define ll long long
using namespace std;
long maximumSum(vector<long> a, long m) {


}
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
    while(n>0){
    n--;
    ll size,div;
    cin>>size>>div;
    vector<ll> res;
    for(int i=0;i<size;i++){
    ll num;
    cin>>num;
    res.push_back(num);
    }
    cout<<maximumSum(res,num)<<endl;
    }
    return 0;     
}
