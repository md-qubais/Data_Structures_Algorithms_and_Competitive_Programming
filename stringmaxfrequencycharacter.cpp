#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    int arr[28]={0};
     for(int i=0;i<str.length();i++){
     arr[str[i]-96]++;
     }
     int max=0;
     for(int i=1;i<28;i++){
        if(arr[i]>arr[max]){
               max=i;
        }
     }
     cout<<(char)(max+96)<<endl;
    return 0;
}