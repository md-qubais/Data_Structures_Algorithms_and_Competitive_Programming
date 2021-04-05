#include<bits/stdc++.h>
using namespace std;
int howManyGames(int p, int d, int m, int s) {
  int res=0;
  int count=0;
  while(res+p<=s){
   res=res+p;
  
   count++;
   if(p>m){
    p=p-d;
   } if(p<m){
     p=m;
   }
  }



return count;
}
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    cout<<howManyGames(p,d,m,s)<<endl;
	return 0;
}