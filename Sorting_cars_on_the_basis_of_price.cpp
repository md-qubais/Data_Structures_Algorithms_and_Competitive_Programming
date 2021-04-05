#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Car{
public:
	int price;
	string name;
	Car(){

	}
	Car(int price,string name){
		this->price=price;
		this->name=name;
	}
};
//sorting on the basis of prices
bool comp_price(Car c1,Car c2){
return c1.price<c2.price;
}
//sorting on the basis of their names
bool comp_name(Car c1,Car c2){
return c1.name<c2.name;
}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	//here we are sorting cars on the basis of price
	int num;
	cout<<"Enter how many cars you waneted to enter:"<<endl;
	cin>>num;
	cout<<"Enter the name and price of the cars:"<<endl;
    Car car[num];
    for(int i=0;i<num;i++){
             cin>>car[i].name>>car[i].price;
    }
    sort(car,car+num,comp_name);
    for(int i=0;i<num;i++){
        cout<<car[i].name<<" "<<car[i].price<<endl;
    }
	return 0;     
}