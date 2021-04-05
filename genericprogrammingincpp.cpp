#include<bits/stdc++.h>
#include<conio.h>
#define ll      long long
using namespace std;   
//templates give freedom from data types
/*template<class T>
int search(T arr[],int n,T key){
	for(int i=0;i<n;i++){
   if(arr[i]==key) return i;
	}
	return n;
}*/
//auto keyword can be used as return type
//and also auto keyword can be used as inside the 
//function
//but auto keyword cant be used as the function
//parameters
//templates+iterators give freedom from containers
template<class iterator,class t>
auto search(iterator begin,iterator end,t key){
while(begin!=end){
if(*begin==key) return begin;
begin++;
}
return end;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   /* string str[]={"qubais","imad","mansoor","raqeeb","hameed"};
    int n=sizeof(str)/sizeof(string);
    string key="mansoor";
    cout<<search(str,n,key)<<endl;*/
    vector<int> v;
    for(int i=0;i<10;i++){
    v.push_back(i+1);
    }
   auto it= search(v.begin(),v.end(),9);
   if(it==v.end()){
   cout<<"element not found"<<endl;
   }else{
   	cout<<"Element "<<*it<<" is found at:"<<it-v.begin()<<" position"<<endl;
   }
    /*int arr[10];
    for(int i=0;i<10;i++){
    arr[i]=i+1;
    }  
    auto it=search(arr,arr+10,9);
    if(it==arr+10){
    cout<<"element not found in the given array"<<endl;

    }else{
    	cout<<"element "<<*it<<" is found at:"<<it-arr<<" position"<<endl;
    }*/
    
    return 0;
}