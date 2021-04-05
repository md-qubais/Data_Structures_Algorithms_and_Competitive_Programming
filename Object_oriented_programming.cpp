#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int    int
#define endl  "\n"
using namespace std;   
class Car{
public:
	int price;
	int model;
	char ch[20];
};
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	Car c;
	cout<<sizeof(c)<<" "<<sizeof(Car)<<endl;
	return 0;     
}