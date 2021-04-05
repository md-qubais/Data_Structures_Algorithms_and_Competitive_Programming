#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
void updatebit1(int &n,int i,int v){
if(v==1){
int mask=(1<<i);
n=n|mask;
}else{
int mask=~(1<<i);
n=n&mask;
}
}
void updatebit(int &n,int i,int v){
int mask=~(1<<i);
int clear=n&mask;
}
void clearrange(int &n,int i){
int mask=(~(0)<<i+1);
n=n&mask;
}

int rangeclear(int n,int i,int j){
int a=(~0)<<j+1;
int mask=(~0)<<i;
int b=~mask;
int mask1=a|b;
int num=n&mask1;
return num;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    rangeclear(n,1,3);
    cout<<n<<endl;
    return 0;
}
