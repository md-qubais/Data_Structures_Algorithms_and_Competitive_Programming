#include<bits/stdc++.h>
using namespace std;
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
    int m;
    cin>>m;
    int brr[m];
    for(int i=0;i<m;i++){
    cin>>brr[i];
    }
    int gre;
    if(m>n){
   gre=m+1;
    }else{
    	gre=n+1;
    }
    int res[gre];
    res[0]=0;
    int i=n-1,j=m-1,k=gre-1;
    int carry=0;
    while(i>=0&&j>=0){
    int num=arr[i--]+brr[j--]+carry;
     if(num>=10){
      carry=num/10;
      num=num%10;
      res[k--]=num;
    }else{
    	carry=0;
    	res[k--]=num;
    }
    } 
    
    while(i>=0){
    int num=carry+arr[i--];
    if(num>=10){
   carry=num/10;
   num=num%10;
   res[k--]=num;
    }else{
    	carry=0;
    	res[k--]=num;
    }
    }
    while(j>=0){
    	int num=carry+brr[j--];
    	if(num>=10){
           carry=num/10;
           num=num%10;
            res[k--]=num;
    	}else{
    		carry=0;
    		res[k--]=num;
    	}
    }
    if(carry>0){
   res[k--]=carry;
    }
    int left=0;
    if(res[0]==0){
    left=1;
    }
    for(int i=left;i<gre;i++){
     cout<<res[i]<<", ";
    }
    cout<<"END";
    return 0;
}