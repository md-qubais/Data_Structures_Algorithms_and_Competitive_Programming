#include<bits/stdc++.h>
using namespace std;
int migratoryBirds(vector<int> arr) {
int max=INT_MIN;
for(int i=0;i<arr.size();i++){
 if(arr[i]>max){
max=arr[i];
 }
}
sort(arr.begin(),arr.end());
int a[max+1]={0};
for(int i=0;i<arr.size();i++){
a[arr[i]]++;
}
int min=0;

for(int i=1;i<max+1;i++){
if(a[i]>a[min]){
min=i;
}
}
return min;
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
    cin>>num;
    vector<int> arr;
    for(int i=0;i<num;i++){
     int a;
     cin>>a;
     arr.push_back(a);
    }
    cout<<migratoryBirds(arr)<<endl;
    return 0;
}