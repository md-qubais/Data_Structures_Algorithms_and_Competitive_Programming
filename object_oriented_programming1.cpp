#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int    long long
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
	cout<<sizeof(c)<<endl;//c is an object and 
	//it is an actual memeory because the object is created
	//so this takes physical memeory
	cout<<sizeof(Car)<<endl;//Car is class
	//it does not take any physical memory
	//it just show us that after creation
	//of the object the object will take this kind of
	//memory ie 28 bytes
	return 0;     
}