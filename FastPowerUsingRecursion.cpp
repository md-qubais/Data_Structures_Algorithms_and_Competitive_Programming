#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int basic_power(int a,int n){
/*if(n==0){
return 1;
and here we can also write where if n==1 then return a
}*/
	if(n==1){
return a;
	}
return a*basic_power(a,n-1);
}





int fast_power(int a,int n){
if(n==1){
return a;
}
int smaller_ans;
smaller_ans=fast_power(a,n/2);
int ans=smaller_ans*smaller_ans;
/*if(n%2==0){
return ans;
}
return a*ans;
or here you can also write using bitmasking
the first bit is 1 means it is contributing 
to the entire number towards odd
and if the first bit is zero than the entire number
in the binary number system is odd nuber
so we chech the number&1 means it is checking if
the first number is 1 or 0 if the number is 1
then it is odd number and if the number is 0
than the number is even number
*/
if(n&1){
return ans*a;
}
return ans;
}




int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fast_power(2,4)<<endl;

    return 0;     
}