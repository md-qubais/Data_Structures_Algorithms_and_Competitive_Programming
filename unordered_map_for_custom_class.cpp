#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Student{
public:
	string first_name;
	string last_name;
	int rno;
	Student(string first_name,string last_name,int rno){
		this->first_name=first_name;
		this->last_name=last_name;
		this->rno=rno;
	}
	bool operator==(const Student &s)const {
	return	rno==s.rno;
	}
};


class Hashfun{
public:
	//unsigned int data type used to 
	//store bytes of the particular memory
 	size_t operator()(const Student &s)const {
 		return s.first_name.length()+s.last_name.length();

	}
};

int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	unordered_map<Student,int,Hashfun> m;
	Student s1("Mohammed","qubaisuddin",587);
	Student s2("Mohammed","Abdul_hameed",530);
	Student s3("Abdul","imad",48);
	Student s4("Mohammed","qubaisuddin",540);
	m[s1]=1;
	m[s2]=2;
	m[s3]=3;
	m[s4]=4;
	for(auto it:m){
		cout<<it.first.first_name<<" "<<it.first.last_name<<" "<<it.first.rno<<" "<<it.second<<endl;
	}

	return 0;     
}