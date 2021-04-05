#include<bits/stdc++.h>
using namespace std;
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
       arr[i]=i+1;
    }  
    time_t start=clock();
    for(int i=0;i<num;i++){
     cout<<arr[i]<<" ";
    }
    cout<<endl;
    time_t end=clock();
    cout<<end-start<<endl;
    return 0;
}