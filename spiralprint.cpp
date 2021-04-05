#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int rows,cols;
    cin>>rows>>cols;
    int a[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
     cin>>a[i][j];
        }
}
       int startrow=0;
       int startcol=0;
       int endrow=rows-1;
       int endcol=cols-1;
       while(startrow<=endrow&&startcol<=endcol){
        for(int i=startcol;i<=endcol;i++){
          cout<<a[startrow][i]<<" ,";
       }
       startrow++;
       for(int i=startrow;i<=endrow;i++){
        cout<<a[i][endcol]<<" ,";
       }
       endcol--;
       if(endrow>startrow){
           for(int i=endcol;i>=startcol;i--){
             cout<<a[endrow][i]<<", ";
           }
           endrow--;
       }
       if(endcol>startcol){
          for(int i=endrow;i>=startrow;i--){
            cout<<a[i][startcol]<<", ";
          }
          startcol++;
       }
       cout<<"END";


        return 0;
        }
    
}