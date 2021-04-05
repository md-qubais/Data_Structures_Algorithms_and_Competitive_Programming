#include<bits/stdc++.h>
#define ll      long long
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
T operator[](T i){
	return arr[i];
}
};
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    v.push_back('e');
    v.push_back('f');
   for(int i=0;i<v.size();i++){
   cout<<v[i]<<endl;
   }
    return 0;
}