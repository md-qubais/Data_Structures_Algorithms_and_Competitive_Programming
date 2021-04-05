#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
template<typename T>
class Graph{
public:
	//here below the map is same as
	//list<T> *l=new list<T>[any number];
	map<T,list<T>> l;
	void addEdge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void bfs(T src){
		unordered_map<T,bool> visited;
		queue<T> q;
		q.push(src);
		visited[src]=true;
		while(!q.empty()){
			cout<<q.front()<<endl;
			for(auto it:l[q.front()]){
                    if(!visited[it]){
                    	q.push(it);
                    }
                    visited[it]=true;
			}
               q.pop();
		}


	}
};


int32_t main(){
	qubais_judge;
	IOS;
	Graph<int> g;
	g.addEdge(1,2);
	g.addEdge(1,0);
	g.addEdge(2,3);
	g.addEdge(3,0);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.bfs(0);
	return 0;   
}