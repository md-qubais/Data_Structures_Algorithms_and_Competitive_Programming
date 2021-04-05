#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Point{
public:
	int x,y;
	Point(int x,int y){
		(*this).x=x;
		(*this).y=y;
	}
};


class Compare{
public:
bool	operator()(Point p1,Point p2){
if(p1.x==p2.x){
	return p1.y<p2.y;
	}
	return p1.x<p2.x;
}
};

int count_rec(vector<Point> coords){
int n=coords.size();
//insert all points in the set
set<Point,Compare> s;

for(int i=0;i<coords.size();i++){
s.insert(coords[i]);
}


//run two loops
int ans=0;
//stop at second last point
//because the last point is the after ending point
//it means it is pointing after the container ends
//so we stop one step before to get the next running
//inner loop to be pointed at the next(it) so
//it hits s.end() and if we not do like the above 
//guidelines then it never hits s.end()
//and set is not linear container so we use
//next(it) if it was linear we can use it+1
for(auto it=s.begin();it!=prev(s.end());it++){
for(auto jt=next(it);jt!=s.end();jt++){
Point p1=*it;
Point p2=*jt;
if(p2.x==p1.x or p1.y==p2.y){
	continue;
}
Point p3(p2.x,p1.y);
Point p4(p1.x,p2.y);
if(s.find(p3)!=s.end() and s.find(p4)!=s.end()){
ans++;
}


}
}


//to avoid the symmetric case

return ans/2;
}


int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int m;
	cin>>m;
	vector<Point> coords;
	while(m--){
		int x,y;
		cin>>x>>y;
		Point p(x,y);
        coords.push_back(p);
	}
	cout<<count_rec(coords)<<endl;
	return 0;     
}