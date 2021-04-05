#include<bits/stdc++.h>
#define ll      long long
using namespace std;  
#include<bits/stdc++.h>
#define ll      long long
using namespace std;
void get_no_of_divisors(vector<int> primes,int num){
vector<pair<int,int>> res;
int n=num;
int i=0;
int p=primes[i];
while(p*p<=num){
if(num%p==0){
	int count=0;
while(num%p==0){
	count++;
num=num/p;
}
res.push_back(make_pair(p,count));
}
p=primes[++i];
}
if(num!=1){
res.push_back(make_pair(num,1));
}
cout<<"These below are the prime divisors of the number "<<num<<endl;
for(auto i:res){
cout<<i.first<<" "<<i.second<<endl;
}
cout<<"Below is the count of the total divisors of "<<n<<endl;
int count=1;
for(auto x:res){
count=count*(x.second+1);
}
cout<<count<<endl;
}


vector<int> getprimes(int num){
int arr[num+1]={0};
arr[0]=arr[1]=0;
arr[2]=1;
for(int i=3;i<=num;i=i+2){
arr[i]=1;
}
for(int i=3;i<=num;i=i+2){
for(int j=i*i;j<=num;j=i+j){
arr[j]=0;
}
}
vector<int> res;
for(int i=1;i<=num;i++){
if(arr[i]==1)  res.push_back(i);
}
return res;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> primes;
    int num;
    cin>>num;
    primes=getprimes(num);
    get_no_of_divisors(primes,num); 
    return 0;
}