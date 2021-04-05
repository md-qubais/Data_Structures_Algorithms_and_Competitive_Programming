#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//object oriented programming 3
//setters and getters


//defining a new data type
class Car{
private:
	float price;
public:
	int model_no;
	string name;
	void update_price(){
     price=2000;
	}
	void getdiscount(){

	}

	//this is getter and setter
	//getter
	float getprice(){
		return price;
	}
	//setter
	void setprice(float p){
		if(p>0){
       price=p;
		}else{
			 price=111;
		}

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
	c[0].setprice(200);
	c[0].model_no=20;
	
	c[0].print();
	return 0;     
}