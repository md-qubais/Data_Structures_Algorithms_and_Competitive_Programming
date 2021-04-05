#include<bits/stdc++.h>
#define ll      long long
using namespace std;   

int beautifulTriplets(int d, vector<int> arr) {
int n=(1<<(arr.size()))-1;
int count=0;
for(int i=1;i<=n;i++){
if(__builtin_popcount(i)==3){
int mask=i;
int j=0;
int res[3];
int pos=0;
while(mask>0){
if(mask&1){
res[pos++]=arr[j];
}
j++;
mask=mask>>1;
}

int i1=0,j1=1,k1=2;
int t=(res[j1]-res[i1]);
int ti=(res[k1]-res[j1]);

if(t==ti&&t==d){
count++;
}
}
}
return count;
}

int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    int d;
    cin>>num>>d;
    vector<int> res;
    for(int i=0;i<num;i++){
    int a;
    cin>>a;
    res.push_back(a);
    }
    cout<<beautifulTriplets(d,res)<<endl;
    return 0;     
}