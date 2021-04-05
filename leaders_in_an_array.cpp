#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void leaders_in_array(int *arr,int num){
int rightmax[num];
rightmax[num-1]=arr[num-1];
for(int i=num-2;i>=0;i--){
if(arr[i]>rightmax[i+1]){
rightmax[i]=arr[i];
}else rightmax[i]=rightmax[i+1];
}
for(int i=0;i<num-1;i++){
if(arr[i]>=rightmax[i+1]){
cout<<arr[i]<<" ";
}
}
cout<<arr[num-1];
}




int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	while(n>0){
    n--;
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
    cin>>arr[i];
    }
    leaders_in_array(arr,num);
    cout<<endl;
	}
	return 0;     
}