#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
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
    bool cycle_helper(int node,bool *visited,int parent){
       visited[node]=true;
       for(auto nbr:l[node]){
       	//go and rec visit the neighbour
       	if(!visited[nbr]){
           if(cycle_helper(nbr,visited,node)){
             return true;
           }
            
       	}else if(nbr!=){
          return true;
       	}

       }
       return false;
    }


    bool contains_cycle(){
    	bool *visited=new bool[v];
    	for(int i=0;i<v;i++){
    		visited[i]=false;
    	}
         
       return cycle_helper(0,visited,-1);
    }


};


int32_t main(){
	qubais_judge;
	IOS;
	return 0;   
}