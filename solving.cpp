#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
template<class T>
class Vector{
int c=0;
int m=0;
T *arr;
public:
	Vector(){
	}
Vector(T i){
arr=new T[i];
m=i;
}

void operator()(string str){
cout<<"The name of the vector is:"<<str<<endl;
}


void clear(){
T *old=arr;
arr=new T[m];
delete []old;
c=0;
}
int capacity(){
	return m;
}
int size(){
	return c;
}
T front(){
	return arr[0];
}
T back(){
	return arr[c-1];
}
T at(int i){
	return arr[i];
}
bool empty(){
return c==0;
}
void pop_back(){
	c--;
}
void push_back(T i){
if(m==0){
	m++;
arr=new T[m];
}
if(c==m){
T *old=arr;
arr=new T[2*m];
for(int i=0;i<m;i++){
arr[i]=old[i];
}
delete []old;
m=2*m;
}
arr[c]=i;
c++;
}




T& operator[](T i){
	return arr[i];
}
void print(){
	for(int i=0;i<c;i++){
   cout<<arr[i]<<" ";
	}

}
};
template<class T>
ostream& operator<<(ostream &os,Vector<T> &x){
for(int i=0;i<x.size();i++){
cout<<x[i]<<" ";
}
return os;
}
template<class T>
//each and every binary operators must be
//overloaded outside the class
void operator+(Vector<T> &v1,Vector<T> &v2){
}
template<class T>
istream& operator>>(istream &is,Vector<T> &x){
	
return is;
}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;

 	return 0;     
}