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
	//overrided constructor by using the class name
	//and without any return type
	//here default constructor is overrided
     Car(){
     cout<<"Inside car constructor"<<endl;
     }
    //here you can also take advantage of the constructor
     //and you can initialize some starting value
     //or you can assign the value to the class data memebers
     //by using parameterized constructor
   Car(float p,int model,string ch){
  price=p;
  model_no=model;
  name=ch;
   }
   
   Car(float p){
   price=p;
   }
//these above three constructors are called as
   //constructor overloading


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
	//or define/declare a Car datatype
	//initializing everything from the parameterized constructors
	Car c(100,20,"mercedes");//makes a call to the constructore function
	//automatically and only once
    //if you want to override it you must create
	//a constructor function in the class
	//with the class name and no return type

	return 0;     
}