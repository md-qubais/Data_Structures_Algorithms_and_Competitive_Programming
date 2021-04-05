#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//actually this is cycle detection in
//the graph using bfs


class Graph{
public:
	list<int> *l;
	int v;
	Graph(int v){
		this->v=v;
		l=new list<int>[v];
	}
	void addEdge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);

	}
    bool istree(){
    	bool *visited=new bool[v];
    	int *parent=new int[v];
    	queue<int> q;
    	for(int i=0;i<v;i++){
          visited[i]=false;
          parent[i]=i;
    	}
        int src=0;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
               int node=q.front();
               q.pop();
               for(auto nbr:l[node]){
               	if(visited[nbr]==true and parent[node]!=nbr){
                    return false;
               	
               	}else if(!visited[nbr]){
               		visited[nbr]=true;
               		parent[nbr]=node;
               		q.push(nbr);
               	}

               }
        }

    }

};


int32_t main(){
	qubais_judge;
	IOS;
	return 0;   
}