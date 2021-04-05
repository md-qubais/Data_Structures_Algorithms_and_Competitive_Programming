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
		unordered_map<T,int> dist;
		queue<T> q;
		
		//here below we are making all the nodes
		//to INT_MAX means not visited
        //and hence l returns the map pair 
        for(auto it:l){
        	dist[it.first]=INT_MAX;
        }
        q.push(src);
        dist[src]=0;

		while(!q.empty()){
			//cout<<q.front()<<endl;
			for(auto it:l[q.front()]){
				//here we are doing nothing
				//if the distance is discovered first
				//if not discovered first then we are
				//updating the distance of that particular
				//node
                    if(dist[it]==INT_MAX){
                    	q.push(it);
                    	dist[it]=dist[q.front()]+1;
                    }
                    
			}
               q.pop();
		}
        for(auto it:l){
        	cout<<"Node->"<<it.first<<" is distance->"<<dist[it.first]<<" from the source"<<endl;

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