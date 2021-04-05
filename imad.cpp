#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
//This is the manually checking the 
//time complexity

void bubbleSort(int arr[], int n)  
{  
    for (int i = 0; i < n-1; i++)         
    for (int j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(arr[j], arr[j+1]);  
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
    arr[i]=num-i;
   }
   bubbleSort(arr,num);
    for(int i=0;i<num;i++){
   cout<<arr[i]<<endl;
    }
    return 0;     
}