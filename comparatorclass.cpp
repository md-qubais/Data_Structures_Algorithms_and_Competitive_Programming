#include<bits/stdc++.h>
#define ll      long long
using namespace std;  
//template gives freedom from data types;
//template + iterators give freedom from containers;
//template +iterators+comparators give freedom 
//from dataytpes,containers and our own comparisons; 
template<class i,class t>
iterator search(iterator start,iterator end,t key){
while(start!=end){
if(key(*start,key)){
	return start;
}
start++;
}
return end;
}


class human{
public:
	string name;
	int id;
	bool operator()(human h1,human h2){
     if(h1.name==h2.name){
     return true;
     } else return false;
	}
	human(){}
	human(string name,int id){
     this->name=name;
     this->id=id;
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
    human h1("qubais",1);
    human h2("imad",2);
    human h3("hameed",3);
    human h4("mansoor",4);
    human h5("raqeeb",5);
    vector<human> v;
    v.push_back(h1);
    v.push_back(h2);
    v.push_back(h3);
    v.push_back(h4);
    v.push_back(h5);
    human h6("uddin",10);
    vector<human>::iterator it=search(v.begin(),v.end(),h6);
    if(it!=v.end()){
    cout<<"The human named:"<<h6.name<<" found in the list of vector<human>"<<endl;
    }
    else cout<<"The human named:"<<h6.name<<" does not found in the list of the vector"<<endl;

    return 0;     
}