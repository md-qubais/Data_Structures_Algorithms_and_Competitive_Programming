#include<bits/stdc++.h>
using namespace std;
bool palindrome(int left,int right,int *arr){
if(arr[left]!=arr[right]){
return false;
}else{
return true;
}
return true;
}
int main(){
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
    for(int i=0;i<num;i++){
 // cout<<arr[i]<<" ";
    }
   /* yeah this is the solution but it is
              not the optimized approach
              this solution leading towards
              time limit exceed error
    int i=0,j=num-1;
    string b="true";
    while(i<j){
      if(arr[i]!=arr[j]){
            b="false";
            break;
      }
    }
    cout<<b<<endl;*/
    bool b=false;
    if(num==0){
      b=true;
    }else if(num==1){
    b=false;
    }else{
    //	b=palindrome(0,num-1,arr);
    }

    if(b=true){
       cout<<"true"<<endl;
    }else{
    	cout<<"false"<<endl;
    }
return 0;
}