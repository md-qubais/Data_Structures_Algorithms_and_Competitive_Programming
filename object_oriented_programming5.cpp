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

//here we are overriding the default copy constructor
 Car(Car &x){
 	cout<<"Inside the overrided copy constructor"<<endl;
name=x.name;
price=x.price;
model_no=x.model_no;

 }



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
	//Car d;-->this is normal default const

	//create an object
	//or define/declare a Car datatype
	//initializing everything from the parameterized constructors
	Car c(100,20,"mercedes");//makes a call to the constructore function
	//automatically and only once
    //if you want to override it you must create
	//a constructor function in the class
	//with the class name and no return type
    

    //Car e(c);//this is known as the copy constructor
    Car e=c;//this is also another way of copy constructor
    


    //here the copy constructors is by default
    //we dont need to create it explicitly
    //if you want we can create it
    //but here it just creates a copy of the actual param
    //which we are passing to a copy constor
    e.print();//-->here we are printing the copy con-st

	return 0;     
}