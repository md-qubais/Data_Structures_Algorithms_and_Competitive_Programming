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
    void topological_sort(){
    	int *indegree=new int[v]{0};
    	for(int i=0;i<v;i++){
    		for(auto it:l[i]){
    			indegree[it]++;
    		}
    	}
      queue<int> q;
      for(int i=0;i<v;i++){
             if(indegree[i]==0){
             	q.push(i);
             }
      }
        while(!q.empty()){
        	cout<<q.front()<<endl;
        	for(auto it:l[q.front()]){
        		indegree[it]--;
        		if(indegree[it]==0){
        				q.push(it);
        		}

        	}
               q.pop();
        }
   



    }

};


int32_t main(){
	qubais_judge;
	IOS;
	Graph g(6);
    g.addEdge(1,2);
    g.addEdge(1,4);
    g.addEdge(0,2);
    g.addEdge(4,5);
    g.addEdge(2,5);
    g.addEdge(2,3);
	g.topological_sort();
	return 0;   
}