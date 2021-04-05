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
    vector<int> d{1,2,3,4,5};
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
    }
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    return 0; 
    
}