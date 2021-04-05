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
   int rows,cols;
   cin>>rows>>cols;
   int arr[rows][cols];
   for(int i=0;i<rows;i++){
   	for(int j=0;j<cols;j++){
    cin>>arr[i][j];    
   	}
   }
    
    int startrow=0;
    int startcol=0;
    int endrow=rows-1;
    int endcols=cols-1;
    
while(startrow<=endrow){

    for(int i=startrow;i<=endrow;i++){
     cout<<arr[i][startcol]<<", ";
    }
    startcol++;
    for(int i=startcol;i<=endcols;i++){
          cout<<arr[endrow][i]<<", ";
    }
    endrow--;
    if(startcol<=endcols){
    for(int i=endrow;i>=startrow;i--){
      cout<<arr[i][endcols]<<", ";
    }
}
    endcols--;
    if(startrow<=endrow){
    for(int i=endcols;i>=startcol;i--){
    cout<<arr[startrow][i]<<", ";
    }
}
    startrow++;

}
cout<<"END";

    return 0;
}