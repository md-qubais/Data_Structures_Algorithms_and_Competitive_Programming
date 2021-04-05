#include<bits/stdc++.h>
using namespace std;
int find(int *arr,int n,int key){
	int l=0;
	int h=n-1;
	while(l<h){
    int mid=(l+h)/2;
    if(arr[mid]==key){
    return mid;
    }
    else if(key<=arr[mid]&&key>=arr[l]){
    if(key>arr[mid]){
    l=mid+1;
    }else{
  h=mid-1;
    }
    }else{
if(key>=arr[mid]&&key<=arr[h]){
if(key>arr[mid]){
l=mid+1;
}
else{
h=mid-1;
}
}
    }

	}
	return -1;
}

int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
   cin>>arr[i];
    }
    int key;
    cin>>key;
   
    int getele=find(arr,n,key);
   if(getele==-1){
    cout<<"ELement not found"<<endl;
   }
   else{
   	cout<<"element is found at:"<<getele<<endl;
   }
   return 0;
}