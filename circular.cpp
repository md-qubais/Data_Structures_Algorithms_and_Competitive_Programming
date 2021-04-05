#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int countLattice(int r) 
{ 
    if (r <= 0) 
        return 0;  
  
    int result = 4; 
    for (int x=1; x<r; x++) 
    { 
        int ySquare = r*r - x*x; 
        int y = sqrt(ySquare);
        
        if (y*y == ySquare   ) 
            if(r==0 or x==0 or r==x){
            	result+=4;
            }else{
            	result+=8;
            }
    } 
    return result; 
} 
string get(int d,int k){
	string ans="impossible";
	int count=0;
	count=countLattice(sqrt(d));
	if(count<=k){
		ans="possible";
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int d;
		int k;
		cin>>d>>k;
		/*if(k<4){
			 cout<<"impossible"<<endl;
			continue;
		}*/
		cout<<get(d,k)<<endl;
	}
	cout<<endl;
	return 0;
}