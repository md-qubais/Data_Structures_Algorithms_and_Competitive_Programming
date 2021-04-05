#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
/*
template<class u,class v>
class Pair{
public:
	u first;
	v second;
 void make_pair(u &f,v &s){
   first=f;
   second=s;
	}
} ;
*/
/*template<class T>
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
*/

bool mycomp(pair<string,int> p1,pair<string,int> p2){
return p1.first<p2.first;
}

bool price_compare(pair<string,int> p1,pair<string,int> p2){
return p2.second> p2.second;
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
/*	Vector<int> v,fun;
	v("vector qubais");
	//it is looking like function;
	//but it is object 
	//so this is known as functor:functional object
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
    fun.push_back(7);
    fun.push_back(7);
    fun.push_back(7);
    fun.push_back(7);
	cout<<v<<" "<<fun<<endl;//now isnt it cool to
	//print the entire vector just like that 
	//but we have to overload the operator 
	//<< and by using the special object from 
	//the class ostream which is written in class Vector
	v[0]=10;//instead of returning of the copy
	//we are going to return it by reference 
	//then we can acess like this
	//v[0]=10;  v[1]+=20;  v[3]=20; v[2]-=30;
	v.print();
	*/
	/*
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	for(auto x:s){
   cout<<x<<" ";
	}*/
/*	vector<pair<string,int>> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
      string str;
      cin>>str;
      int num;
      cin>>num;
      v.push_back(make_pair(str,num));
	}
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl;

	}
	sort(v.begin(),v.end(),mycomp);
cout<<endl;
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl;

	}*/
	//we are using bitset is very efficient
	//and here the indexing is from right to left
	//and where as the bool array will take 
	//1 byte for each memeory
	//where as bitset will take only 1 bit for each
	//memeory allocation
	bitset<30> b;
	b[0]=b[1]=1;
	cout<<b<<endl;
	return 0;     
}