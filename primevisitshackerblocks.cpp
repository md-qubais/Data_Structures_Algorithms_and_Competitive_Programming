#include<bits/stdc++.h>
#include<iostream>
#define ll long long
using namespace std;
ll isPrime[10000000];

void prime(int a, int b) {
  int count = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime[i]) {
      count++;
    }
  }
  cout << count << endl;
  return;
}

void gen_primes(){
	for(unsigned i=3; i<=10000000; i+=2){
		isPrime[i]=true;
	}
	isPrime[0]=isPrime[1]=false;
	isPrime[2]=true;
	for(unsigned i=2;i*i<=10000000;i++){
		if(isPrime[i]){
			for(unsigned j=i;j*i<=10000000;j++) isPrime[i*j]=false;
		}
	}
}

int main() {

  #ifndef qubais_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;
  cin>>t;
  gen_primes();

  while (t--) {
    int a, b;
    cin>>a>>b;
    prime(a, b);
  }

  return 0;
}
