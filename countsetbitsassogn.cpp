#include<bits/stdc++.h>
using namespace std;
int main() {
   #ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin>>n;
	while(n>0){
    n--;
	int num;
	cin>>num;
	int count=0;
	while(num>0){
        int mask=(num&1);
		if(mask){
             count++;
		}
		num=num>>1;
	}
	cout<<count<<endl;
	}
	return 0;
}