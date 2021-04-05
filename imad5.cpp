#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

bool target(int arr[], int n, int i, int tar){
    if(tar == 0){
        return true;
    }
    if(tar<0){
        return false;
    }
    if(i == n){
            return false;
    }
    bool no = target(arr, n, i + 1 , tar);
    if(no){
        return true;
    }
    bool yes = target(arr, n, i + 1, tar - arr[i]);
    if(yes){
        return true;
    }
    return false;
}

int32_t main(){
    qubais_judge;
    IOS;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int tar ;
    cin>>tar;
    if(target(arr, n,0, tar)) cout<<"true"<<endl;
else cout<<"false"<<endl;
}