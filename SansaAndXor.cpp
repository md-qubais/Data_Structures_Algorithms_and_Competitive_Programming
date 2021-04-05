#include<bits/stdc++.h>
using namespace std;
int sansaXor(vector<int> arr) {
vector<int> res;
int ans=0;
res.push_back(arr[0]);
for(int i=1;i<arr.size();i++){
res.push_back(res[i-1]^arr[i]);
}
    for(int i=0;i<res.size();i++){
    for(int j=i;j<res.size();j++){
    if(j==0){
      ans=ans^res[i];
    }else{
    	ans=ans^res[j]^res[i-1];
    }

    }
    }


return ans;
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
    while(n--){
    int num;
    cin>>num;
    vector<int> res;
    for(int i=0;i<num;i++){
         int a;
         cin>>a;
         res.push_back(a);
    }
    cout<<sansaXor(res)<<endl;
    }
    return 0;     
}