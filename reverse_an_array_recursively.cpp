#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;  

void revser_rec1(int *arr,int *res,int num,int i,int j){
	if(num-1<i){
       return ;
	}
	res[j]=arr[num-1];
	revser_rec1(arr,res,num-1,i,j+1);
}

void revser_rec2(int *arr,int s,int e){
	if(s>=e-1){
      return ;
	}
	swap(arr[s],arr[e-1]);
	revser_rec2(arr,s+1,e-1);

}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
       cin>>arr[i];          
	} 
	revser_rec2(arr,0,num);
	for(int i=0;i<num;i++){
            cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;     
}