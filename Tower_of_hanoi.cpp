#include<bits/stdc++.h>
using namespace std;
void towersofhonai(int n,char src,char help,char dest){
if(n==0){
return ;
}
towersofhonai(n-1,src,dest,help);
cout<<"shifted the ring "<<n<<" from "<<src<<" to "<<dest<<" using "<<help<<endl;
towersofhonai(n-1,help,src,dest);
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
    towersofhonai(num,'A','B','C');
	return 0;
}