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
    }
    bool cycle_helper(int node,bool *visited,bool *Stack){
           visited[node]=true;
           Stack[node]=true;
             for(auto nbr:l[node]){
             	if(Stack[nbr]==true){
             		return true;
             	}
             	else if(!visited[nbr]){
                   if(cycle_helper(nbr,visited,Stack)){
                        return true;
                   }
             	}

             }
              
            //at the time of returning
            Stack[node]=false;
          return false;
    }



    bool contains_cycle(){
    	bool *visited=new bool[v];
    	bool *Stack =new bool[v];
    	return cycle_helper(0,visited,Stack);
    }



 };



int32_t main(){
	qubais_judge;
	IOS;

	return 0;   
}