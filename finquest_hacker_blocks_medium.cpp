#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//defining a new data type
class Car{
public:
	int price;
	int model_no;
	string name;
	void update_price(){
     price=2000;
	}
	void getdiscount(){

	}
void print(){
	cout<<"The name of the car is:"<<name<<endl;
	cout<<"The model_no of the car is:"<<model_no<<endl;
	cout<<"The price of the car is :"<<price<<endl;
}
};



int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	//create an object
	//store max info about 20 cars
	Car c[20];
	c[0].name="mercedes";
	c[0].price=10;
	c[0].model_no=20;
	cout<<"printing the car details before updating the price"<<endl;
	c[0].print();
	cout<<"printing the car details after updating the price"<<endl;
	c[0].update_price();
	c[0].print();
	return 0;     
}