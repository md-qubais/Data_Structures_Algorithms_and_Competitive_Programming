#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//fenwick tree range query of summation
struct fenwick_tree{
vector<int> f;
int n;
void init(int n){
	this->n=n+1;
	f.resize(n+1,0);
}
//returns sum of the prefix range from [1,x]
int sum(int x){
int ans=0;
x++;//because 1 based indexing
//now we have to climb to the parent 
while(x>0){
	ans+=f[x];
	x=x-(x & -x);
}
   return ans;
    }
//adding the value to the fenwick tree
void add(int index,int val){
index++;//becasue 1 based indexing
while(index<n){
	//here we are adding all the left subtree to
	//the current node

	f[index]+=val;
	index=index+(index & -index);
}
}
int sum(int l,int r){
	return sum(r)-sum(l-1);
}


};


int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int arr[n];
	fenwick_tree f;
	f.init(n);
	for(int i=0;i<n;i++){
           cin>>arr[i];
           f.add(i,arr[i]);
    }
    int l,r;
    cin>>l>>r;
    l--;
    r--;
    cout<<f.sum(l,r)<<endl;
	return 0;    
}