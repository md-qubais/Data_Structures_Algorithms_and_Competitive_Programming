#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
 //this below code contains the
//graphs depth first search and connected components
//using the depth first search
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
   void dfs_helper(T src,unordered_map<T,bool> &visisted){
         //cout<<src<<" ";
         visisted[src]=true;
         for(auto it:l[src]){
         	if(!visisted[it]){
         		dfs_helper(it,visisted);
         	}

         }
   }
 
   int dfs(){
   	unordered_map<T,bool> visisted;
   	//mark all the nodes of the graph or map as 
   	//un visisted
   	for(auto it: l){
   		visisted[it.first]=false;
   	}
    int count=0;	
   	for(auto it:l){
   		if(!visisted[it.first]){
   			count++;
   	dfs_helper(it.first,visisted);
   }
   }
   return count;
   }
};

int32_t main(){
	qubais_judge;
	IOS;
	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(3,0);
	cout<<g.dfs();
	return 0;   
}