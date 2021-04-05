#include<bits/stdc++.h>
using namespace std;
int findrotatedsortedarray(int *arr,int n,int key){
	int l=0,h=n-1;
	int mid;
	while(l<=h){
		mid=(l+h)/2;
		if(arr[mid]==key){
        return mid;
		}
      if(arr[mid]<=arr[h]){
           if(arr[mid]<=key&&key<=arr[h]){
                l=mid+1;
           }else{
           	h=mid-1;
           }
      }
      else {
           if(arr[l]<=arr[mid]){

                      if(arr[l]<=key&&key<=arr[mid]){
                          
                           h=mid-1;
                      }else{
                   
                          l=mid+1;
                      }
           }
      }

	}


	return -1;
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
    int arr[num];
    for(int i=0;i<num;i++){
      cin>>arr[i];
    }

    int key;
    cin>>key;

    int a = findrotatedsortedarray(arr,num,key);
    cout<<a<<endl;
    return 0;
}