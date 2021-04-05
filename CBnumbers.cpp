#include<bits/stdc++.h>
using namespace std;

bool cbnumber(long long num){
if(num<=1){
return false;
}
if(num<=3){
return true;
}
if(num%2==0||num%3==0){
return false;  
}
for(int i=5;i*i<num;i=i+6){
if(num%i==0||num%(i+2)==0){
return false;
}
}

return true;
}

bool isvisited(int *v,int i,int j){
for(int k=i;k<=j;k++){
 if(v[k]==1){
return true;
 }
}
return false;
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
    cin.get();
    string str;
    cin>>str;
    int count=0;
    int v[n]={0};
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            long long num=0;
            int temp=i;
            while(temp<=j){
             num=num*10+(str[temp]-'0');
             temp++;
              }
               
            if(cbnumber(num)==true){
                  
                 if(isvisited(v,i,j)==false){
                
                     count++;
                     for(int temp=i;temp<=j;temp++){
                    v[temp]=1;
                     }
                 }                                     
            }
          }
    }
    cout<<count<<endl;
    return 0;
}