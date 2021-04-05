#include<bits/stdc++.h>
using namespace std;   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v{1,2,3,4,5,6,7};
    rotate(v.begin()+2,v.begin()+3,v.begin()+5);
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    return 0; 
    
}