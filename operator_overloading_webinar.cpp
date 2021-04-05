#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Complex{
private:
	int real;
	int img;
	//parameterized constructor
public:
	Complex(int r=0,int i=0){
    real=r;
    img=i;
	} 
	//default copy constructor
	//we donot need to define a new copy constructor
   void setreal(const int r) {
   	real = r;
   }
   void setimg(const int i) {
   img=i;
   }
   int getreal() const{
   	return real;
   }
   int getimg() const{
   	return img;
   }
   void print(){
   	if(img>=0){
   cout<<real<<"+"<<img<<"i"<<endl;
   	}else{
   		cout<<real<<"-"<<-img<<"i"<<endl;
   	}
   }
 void add(const Complex &x){
  real+=x.real;
  img+=x.img;
 }

/*void operator+(const Complex &x){
real+=x.real;
img+=x.img;
}*/

void operator!(){
	img=-img;
	real=-real;
}

Complex operator+(const Complex &x){
Complex c(real+x.real,img+x.img);
return c;
}
void operator[](string str){
cout<<real<<"+"<<img<<"i "<<str<<endl;
}
};

istream& operator>>(istream &is,Complex &x){
int real,img;
cin>>real>>img;
x.setimg(img);
x.setreal(real);
return is;
}



ostream& operator<<(ostream &os,Complex &x){
	x.print();
	return os;
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	
	/*Complex c1(10,20);
	c1.print();
	Complex c2;
	c2.setimg(1);
	c2.setreal(30);
	c2.print();
	/*c1.add(c2);
	cout<<"Adding c1 with c2"<<endl;
	c1.print();*/
	//now here it comes the operator overlaoding concept
	/*c1 + c2;
	//we are going to overload the + operator
    cout<<"Adding c1 with c2 by overlaoding + operator"<<endl;
    c1.print();
    //!c1;
    //here we are overloading unary operator
    //so here we dont write braces () for calling
    //unary operator overloading
   // c1.print();
    Complex c3;
    c3=c1+c2;
    c3.print();
    c3["is cool"];*/

    //now for the special cases such as >> and << 
    //operators 
    //cin and cout are the special objects of
    //istream and isotream class of iostream file
    /*Complex d;
    cin>>d;//taking directly input of the class object
    cout<<d;//printing directly the object
	*/
	Complex d1,d2;
	cin>>d1>>d2;
	cout<<d1<<d2;
	return 0;      
}