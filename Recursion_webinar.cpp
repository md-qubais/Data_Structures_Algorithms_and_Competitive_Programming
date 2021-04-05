#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool compare(int a,int b){
//if false then it returns that index of the number 
//which is like 100<=128 and it returns index of 100
return a<=b;
}   
void count_notes(int *arr,int n,int money){
if(money==0){
return ;
}
int largest=lower_bound(arr,arr+n,money,compare)-arr-1;
int m=arr[largest];
cout<<m<<endl;
count_notes(arr,n,money-m);
}



int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int arr[]={1,2,5,10,20,50,100,200,500};
	int n=sizeof(arr)/sizeof(int);
	int money;
	cin>>money;
	count_notes(arr,n,money);
	return 0;     
}