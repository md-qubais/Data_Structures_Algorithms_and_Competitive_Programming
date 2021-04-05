#include<bits/stdc++.h>
using namespace std;
int pickingNumbers(vector<int> a) {
int count=1;
int n=(1<<n)-1;
for(int i=1;i<=n;i++){

int mask=i;
int j=0;
int arr[a.size()];
int pos=0;
while(mask>0){
if(mask&1){
count++;
arr[pos++]=a[j];
}
j++;
mask=mask>>1;
}
if(pos>1){
	for(int i1=0;i1<pos-1;i++){
   if(){

   }
	}
count=max(count,c);
}
}


return count;
}
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    vector<int> res;
    for(int i=0;i<num;i++){
      int a;
      cin>>a;
     res.push_back(a);
    }
    cout<<pickingNumbers(res)<<endl;
    return 0;
}
