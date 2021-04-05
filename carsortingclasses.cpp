#include<bits/stdc++.h>
#define ll      long long
using namespace std;
class car{
public:
	string name;
	int x,y;
	car(){

	}
	car(string name,int x,int y){
		this->name=name;
		this->x=x;
		this->y=y;
	}
	int distance(){
		return x*x+y*y;
	}
};
bool compare(car a,car b){
int d1=a.distance();
int d2=b.distance();
if(d1==d2){
 if(a.name.length()==b.name.length()){
 return a.x<b.x;
 }
 return a.name.length()<b.name.length();
}
return d1<d2;
}

int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<car> v;
    for(int i=0;i<n;i++){
    string name;
    int x,y;
    cin>>name>>x>>y;
    car temp(name,x,y);
    v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);
    for(auto it=v.begin();it!=v.end();it++){
    cout<<it->name<<" "<<it->x<<" "<<it->y<<endl;
    }

    return 0;
}