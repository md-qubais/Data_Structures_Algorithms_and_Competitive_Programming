#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Graph{
unordered_map<string,list<pair<string,int>>> l;
public:
	Graph(){

	}
	void addEdge(string a,string b,bool f,int d){
		l[a].push_back(make_pair(b,d));
		if(f){
		l[b].push_back(make_pair(a,d));
		}
	}
	void print(){
		for(auto it:l){
			cout<<it.first<<"->";
			for(auto i:it.second){
				cout<<i.first<<" "<<i.second<<" ,";
			}
			cout<<endl;
		}
	}
};
int32_t main(){
	qubais_judge;
	IOS;
	Graph g;
	g.addEdge("A","B",true,20);
	g.addEdge("B","D",true,40);
	g.addEdge("A","C",true,10);
	g.addEdge("C","D",true,30);
	g.addEdge("A","D",false,50);
	g.print();
	return 0;   
}