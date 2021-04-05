#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Pair{
public:
	int a;
	int b;
	void make_pair(int a,int b){
		this->a=a;
		this->b=b;
	}
};
	bool operator<(Pair &x,Pair &y){
		return (x.a<y.a and x.b<y.b);
	}

int32_t main(){
	qubais_judge;
	IOS;
	Pair a;
	a.make_pair(10,20);
	Pair b;
	b.make_pair(30,40);
	cout<<(a<b)<<endl;
	return 0;   
}