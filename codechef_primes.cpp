#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool ans[1000000];
bool p[1000000];
void SieveOfEratosthenes(int n,bool prime[])
{
    // Create a boolean array 
    // "prime[0..n]" and initialize
    // all entries it as true. 
    // A value in prime[i] will
    // finally be false if i is 
    // Not a prime, else true.
    //bool prime[n + 1];
    n=1000000;
    memset(prime, true, n+1);
 
    for (int p = 2; p * p < n; p++)
    {
        // If prime[p] is not changed, 
        // then it is a prime
        if (prime[p] == true) 
        {
            //count++;
            // Update all multiples 
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple 
            // of p and are less than p^2 
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    }
void SieveOfSundaram(bool marked[], int nNew) 
{ 
    // Main logic of Sundaram.  Mark all numbers 
    // of the form i + j + 2ij as true where 
    // 1 <= i <= j 
    for (int i=1; i<=nNew; i++) 
        for (int j=i; (i + j + 2*i*j) <= nNew; j++) 
            marked[i + j + 2*i*j] = true; 
} 
  
// Returns number of pairs with fiven conditions. 
int countPrimePairs(int n) 
{ 
    // In general Sieve of Sundaram, produces 
    // primes smaller than (2*x + 2) for a number 
    // given number x. Since we want primes smaller 
    // than n, we reduce n to half 
    int nNew = (n-2)/2; 
  
    // This array is used to separate numbers of 
    // the form i+j+2ij from others where 
    // 1 <= i <= j 
    bool marked[nNew + 1]; 
  
    // Initialize all elements as not marked 
    memset(marked, false, sizeof(marked)); 
  
    SieveOfSundaram(marked, nNew); 
  
    int count = 0, prime_num; 
  
    // Find primes. Primes are of the form 
    // 2*i + 1 such that marked[i] is false. 
    for (int i=1; i<=nNew; i++) 
    { 
        if (marked[i] == false) 
        { 
            prime_num = 2*i + 1; 
  
            // For a given prime number p 
            // number of distinct pairs(i,j) 
            // where (i+j) = p are p/2 
            count = count + (prime_num / 2); 
        } 
    } 
  
    return count; 
} 
  

    int got_it(int n){
    	int count=0;
            while(ans[n]==false){
                n--;
            }
        
        for(int i=2;i<n;i++){
            if(ans[i]){
                
                count++;
            }
        }
        if(count==1){
            return 0;
        }
        if(count&1){
            return count/2+1;
        }
        return count/2;
    }
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;

	SieveOfEratosthenes(1000000,ans);
    while(t--){
		int num;
		cin>>num;
        cout<<countPrimePairs(num)<<endl;
	}
	return 0;   
}
