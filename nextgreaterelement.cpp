#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//here we have to use queue for this kind of 
//problems ie circular kind of problems
void next_greater(int *arr,int *res,int n){
for(int i=0;i<n;i++){
	//here we are init j with the next index
	//of the current i
	//ie it will be after current i
	//or it can be before or the starting of the
	//current starting position of the circular array
	for(int j=(i+1)%n;j!=i;j=(j+1)%n){
		//here we are increment j by value of 1
		//in the circular position
		//if the j hits the last position
		//it will automatically increase its position
		//by 1 from the starting index of the array
                     if(arr[j]>arr[i]){
                     	res[i]=arr[j];
                     	break;
                     }
                     if((j+1)%n==i){
                          res[i]=-1;
                          break;
                     }
	}
}


}


int32_t main(){

	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int arr[num];
	int res[num];
	for(int i=0;i<num;i++){
      cin>>arr[i];
	}	
	next_greater(arr,res,num);
	for(int i=0;i<num;i++){
     cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}