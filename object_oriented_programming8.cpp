#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//destructor
 
class Car{
private:
  float price;
public:
  int model_no;
  char *name;
  Car(){
    name=NULL;
  }
    Car(int p,int m,char *n){
      price=p;
      model_no=m;
      name=new char[strlen(n)];
      strcpy(name,n);
    }

  Car(Car &x){
   price=x.price;
   model_no=x.model_no;
   cout<<"Inside copy constructor"<<endl;
   //this shallow copy-->//name=x.name;//for dynamically created array
   //the shallow copy is doing something kind of like this
   //so that if we change in once object for dynamically 
   //allocated memory cause they both are sharing 
   //same address and they both are pointing to same 
   //address just as shown above
   //this is very bad thing of shallow copy 
   //so we need to go for deep copy where we shuould
   //create another array dynamically and copy all the first
   //objects array which is dynamically to another dynamically
   //created array
 name=new char[strlen(x.name)];
 strcpy(name,x.name);//here this is known as deep copy;
//change in copied object does not affect to copying object

  }

  void operator=(Car &x){
  price=x.price;
  model_no=x.model_no;
  //the copy assignment is doing something kinda of 
  //like this name=x.name -->same as shallow copy
  //so we have to make such as deep copy as below
  //hence by overloading the = assignment operator
  //for copy assignment operator
  name=new char[strlen(x.name)];
  strcpy(name,x.name);
  }


    void setprice(int p){
      price=p;
    }
    void print(){
      cout<<"The name of the car is     :"<<name<<endl;
      cout<<"The price of the car is    :"<<price<<endl;
      cout<<"The model_no of the car is :"<<model_no<<endl;
    }
    ~Car(){
      cout<<"destroyed "<<name<<endl;
      if(name!=NULL){
    delete []name;
      }
    }

};



int32_t main() 
{
  #ifndef qubais_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  IOS;
  Car *c=new Car;
  delete c;
  return 0;     
}