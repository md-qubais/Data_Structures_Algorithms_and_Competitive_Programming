#include<bits/stdc++.h>
using namespace std;


int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int rows;
    int cols;
    int k;
    int s;
    cin>>rows;
    cin>>cols;
    cin>>k;
    cin>>s;
    char arr[rows][cols];
    for(int i=0;i<rows;i++){
              for(int j=0;j<cols;j++){
              cin>>arr[i][j];
              }
    }
  
  for(int i=0;i<rows;i++){
  	for(int j=0;j<cols;j++){
        if(s<k){
break;
        }
           if(arr[i][j]=='.'){
                   s=s-2;
                  
           }else if(arr[i][j]=='*'){
                     
                     s=s+5;
           }else{

                  break;
           }
              if(j!=cols-1) s--;
               
              


  	}
  }
  if(s>k){
cout<<"Yes"<<endl;
cout<<s<<endl;
  }else{
cout<<"No";
  }



    	return 0;
}