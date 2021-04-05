#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;  

void getprimes(int num,int *brr){
int arr[10000+1]={0};
arr[0]=arr[1]=0;
arr[2]=1;
for(int i=3;i<=10000;i=i+2){
arr[i]=1;
}
for(int i=3;i<=10000;i=i+2){
for(int j=i*i;j<=10000;j=i+j){
arr[j]=0;
}
}
int j=1;
for(int i=2;i<=10000;i++){
if(j>=num+1){
break;
}
if(arr[i]==1){
brr[j++]=i;
}

}

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
	int k;
	cin>>k;
	int arr[k+1]={0};
	stack<int> a[k+1],b[k+1];
	for(int i=0;i<num;i++){
           int n;
           cin>>n;
           a[0].push(n);
	}
	int it=1;
	getprimes(k,arr);

	while(it<=k){
     while(!a[it-1].empty()){
             if((a[it-1].top())%arr[it]==0){
                b[it].push(a[it-1].top());
             }else{
             	a[it].push(a[it-1].top());
             }
             a[it-1].pop();
     }
     it++;
	}
	for(int i=0;i<=k;i++){
          while(!b[i].empty()){
                 cout<<b[i].top()<<endl;
                 b[i].pop();
          }
	}
	while(!a[k].empty()){
           cout<<a[k].top()<<endl;
            a[k].pop();
	}
	return 0;     
}