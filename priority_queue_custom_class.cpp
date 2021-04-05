#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class person{
public:
	string name;
	int age;
	person(){

	}
	person(string name,int age){
		this->name=name;
		this->age=age;
	}
};
class personcompare{
public:
	bool operator()(person p1,person p2){
        return p1.age<p2.age;
	}
};



int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	priority_queue<person,vector<person>,personcompare> pq;
	for(int i=0;i<n;i++){
    person p;
    cin>>p.name>>p.age;
    pq.push(p);
	}
	while(!pq.empty()){
        person p=pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
	}
	return 0;     
}