#include<bits/stdc++.h>
using namespace std;
int squares(int a, int b) {
int count=0;
for(int i=a;i<=b;i++){
if(floor(sqrt(i))-ceil(sqrt(i))==0){
count++;
}

}


//Here just return (int)floor(sqrt(b))-ceil(sqrt(a))+1
return count;
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
    while(n>0){
    n--;
    int a,b;
    cin>>a>>b;
    cout<<squares(a,b)<<endl;
    }
	return 0;
}