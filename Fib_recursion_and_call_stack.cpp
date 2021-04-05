#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

//this is fib series using recursion
//where time complex is o(2 pow n) which is really bad
//and space is o(n) ie maximum dept of the tree
//or the maximum extra space used by stack frame
//or maximum extra space used by activation record
//at an instance of time
//now here below are lot of overlapping subproblems
//that we have computed many times
//as the number increase and the overlapping subproblems
//will also increases and that will be very bad
//that is o(2^n)
int fib(int n){
//base case;
//in base case we have to give the smallest
//subproblem possible
//base case n==1 and n==0	
	if(n==1){
      return 1;
	}
	if(n==0){
    return 0;
	}
	return fib(n-1)+fib(n-2);
}
//for bringing this complexicity down we need to use
//dynamic programming
//ie we are first using the top down approach
//it will be valid for all problems
//where u can use recursion(optimal substructure/subproblem) and 
//if there is any
//overlapping subproblems
//recursion + memoization
//o(n) time comp
//o(n) space compe 
int fib(int n,int *dp){
//base case
	if(n==0 or n==1){
        return n;
	}
	//recursive soln;
	//look up if that we have computed the value
	if(dp[n]!=0){
       return dp[n];
	}
	int ans=fib(n-1,dp)+fib(n-2,dp);
	return dp[n]=ans;
}

//now here we are using the bottom up approach
//and its basically a iterative soln
//o(n) time
//o(n) space if we use array
//o(1) space if we dont use array instead we
//can us only two variables
int Fib(int n){
	int a=0,b=1;
	int ans;
	for(int i=2;i<=n;i++){
       ans=a+b;
       a=b;
       b=ans;
	}

	return ans;

}

int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	cout<<Fib(num)<<endl;
	return 0;    
}