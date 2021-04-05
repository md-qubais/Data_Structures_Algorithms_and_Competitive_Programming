#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[10];
    int num=sizeof(arr)/sizeof(int);
    for(int i=0;i<10;i++){
    arr[i]=i;
    }
    if(all_of(arr,arr+num,[](int i){ return i<10;})){
        cout<<"All are less than 10"<<endl;
    }else{
    	cout<<"All are not less than 10"<<endl;
    }
	return 0;
}