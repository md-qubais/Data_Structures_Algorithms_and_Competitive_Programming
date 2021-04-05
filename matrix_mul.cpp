#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
//#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
#include<iostream>
using namespace std;
int main(){
    qubais_judge;
	IOS;
    int row1,col1;
    cin>>row1>>col1;
    int matrix1[row1][col1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>matrix1[i][j];
        }
    }
    int row2,col2;
    cin>>row2>>col2;
    if(col1!=row2){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    int matrix2[row2][col2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>matrix2[i][j];
        }
    }
    int ansi=0;
    int ansj=0;
    int ans[row1][col2];
    
    for(int i=0;i<row1;i++){
        for(int k=0;k<col2;k++){
        int sum=0;
        for(int j=0;j<row2;j++){
        	sum+=matrix1[i][j]*matrix2[j][k];
        }
        ans[ansi][ansj]=sum;
        ansj++;
        }
        ansj=0;
        ansi++;
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
