#include<bits/stdc++.h>
using namespace std;
int ladders(int n){
if(n==0){
return 1;
}
if(n<0){
return 0;
}
return ladders(n-1)+ladders(n-2)+ladders(n-3);
}
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    cout<<ladders(num)<<endl;
	return 0;
}