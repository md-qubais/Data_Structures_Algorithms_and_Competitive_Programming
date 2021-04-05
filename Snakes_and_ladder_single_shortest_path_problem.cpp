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
	}

	T bfs(T src,T dis){
		map<T,int> dist;
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

        
         return dist[dis];
	}
};



int32_t main(){
	qubais_judge;
	IOS;
	//snakes means negative and ladder means positive
	//here we are only calculating how many jumps
	//that we are making if the ladders is at the ith
	//position or how many down fall we are making
	//if there is a snake present in it
	int t;
	cin>>t;
	while(t--){
    int n,l,s;
    cin>>n>>l>>s;
    int boards[n+1]={0};
    for(int i=0;i<l;i++){
    	int n1,n2;
    	cin>>n1>>n2;
    	boards[n1]=n2-n1;
    }
    for(int i=0;i<s;i++){
    	int n1,n2;
    	cin>>n1>>n2;
    	boards[n1]=n2-n1;

    }
	Graph<int> g;
    //here below we are adding edges to the graphs
    //and for every vertex we are having 1->6 dice options
    for(int i=0;i<=n;i++){
    	for(int dice=1;dice<=6;dice++){
           int j=i+dice;
           //here after taking forward
           //we are checking if there is some ladder
           //or snake ->if ladder incerase the value by boards
           //else snake decrease the value by boards
           j+=boards[j];
           if(j<=n){
           	g.addEdge(i,j);
           }
    	}
    }

    	g.addEdge(n,n);
    	//shortest path to source and destination
        cout<<g.bfs(0,n)<<endl;

}
	return 0;   
}