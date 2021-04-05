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
    int n;
    cin>>n;
    while(n>0){
     n--;
     string str;
     cin>>str;
     int count=INT_MAX;
     int size=str.length();
     for(int i=0;i<size-2;i++){
     	for(int j=i+2;j<size;j++){
     		string sub=str.substr(i,j+1-i);
            if(sub.find("1")>=0){
                        cout<<sub<<" 1"<<endl;
               if(sub.find("2")>=0){
               	cout<<sub<<" 1and 2"<<endl;

                   if(sub.find("3")>=0)
                     {
                   cout<<sub<<"all"<<endl;
                   cout<<sub.find("3",0)<<endl;
            if(j-i+1<count){
             count=j-i+1;
            }         
                   }else{
                   	continue;
                   }
               }else{
               	continue;
               }
            }else{
            	continue;
            }
            

     	}
     }
cout<<count<<endl;
    }


    return 0;
}