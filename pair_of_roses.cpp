#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   

void pair_of_roses(int *arr,int num,int amt){
	int i1=0,j1=0;
	for(int i=0;i<num-1;i++){
          int n=amt-arr[i];
          int a=binary_search(arr+i+1,arr+num,n);
          if(a==1){

               auto l=lower_bound(arr+i+1,arr+num,n);
               if((*l+arr[i])==amt){               
                  int index=l-arr;
                   if(i1==0 and j1==0){
                       i1=arr[i];
                       j1=arr[index];
                   }else{ 
                   	int n1=arr[i]-arr[index];
                   	int n2=i1-j1;

                   	if(n1<0){
                            n1=-n1;
                   	}
                   	if(n2<0){
                   		n2=-n2;
                   	}
                   	if(n1<n2){
                   		i1=arr[i];
                   		j1=arr[index];

                   	}

                   }
               }
          }
	}
	cout<<"Deepak should buy roses whose prices are "<<i1<<" and "<<j1<<"."<<endl;
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t){
		t--;
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
         cin>>arr[i];
	}
	int amt;
	cin>>amt;
	sort(arr,arr+num);
	pair_of_roses(arr,num,amt);
}
	return 0;     
}