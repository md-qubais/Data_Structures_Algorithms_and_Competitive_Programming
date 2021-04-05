#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//and here i am assuming the graph
//first node if any will be 0
//and the last node of the graph is if any v-1
class Graph{
	int v;
	//denoting the vertices in the graph
	list<int> *l;
	//here we are denoting the array of list
	//thats why we have initiliaze with the pointer 
	//type variable
public:
Graph(int v){
	this->v=v;
	l=new list<int>[v];
}

//here we are assuming that the edges are bi-directional
void addEdge(int x,int y){
	//here below we are assuming the edges are bidirectional
	//thats why we have converting them into bidirectional
l[x].push_back(y);
l[y].push_back(x);
}


void print(){
	for(int i=0;i<v;i++){
		cout<<"vertex "<<i<<"->";
		for(auto it:l[i]){
			cout<<it<<",";
		}
		cout<<endl;
	}

}

};




int32_t main(){
	qubais_judge;
	IOS;
	Graph g(4);

	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,3);
    
    g.print();
	return 0;   
}