#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef qubais_judge
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int c=1;
    while(t>0){
     t--;
     int rows,cols,plates;
     cin>>rows>>cols>>plates;
     int arr[rows][cols];
     for(int i=0;i<rows;i++){
     	for(int j=0;j<cols;j++){
       cin>>arr[i][j];
     	}
     }
     int count=0;
    
     int ans=0;
     bool b=false;
     for(int i=0;i<rows;i++){
     	int prev=0;
     	if(count==plates){
         b=true;
     	}
     	for(int j=0;j<cols;j++){
            if(count==plates){
                 b=true;
            }
            if(arr[i][j]>=prev||j+1==rows){
                prev=arr[i][j];
                ans=ans+arr[i][j];
                cout<<arr[i][j]<<endl;
                count++;
            }else{
            	break;
            }
     	}
     	if(b==true){
               break;
     	}

     }
     cout<<"Case #"<<c<<": "<<ans<<endl;
     c++;

    }
    return 0;
}