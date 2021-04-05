#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Pair{
public:
	int data;
	int x;
	int y;

};
class Compare{
public:
bool operator()(Pair p1,Pair p2){
return p1.data>p2.data;
}
};

void merge_sorted_arrays(vector<vector<int>> arr,int rows,int cols,vector<int> &v){
priority_queue<Pair,vector<Pair>,Compare> pq;
for(int i=0;i<rows;i++){
	pq.push({arr[i][0],i,0});
}

while(!pq.empty()){
int ele=pq.top().data;
int row=pq.top().x;
int col=pq.top().y;
pq.pop();
v.push_back(ele);
if(col+1<arr[row].size()){
pq.push({arr[row][col+1],row,col+1});
}

}


}

int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> arr;
	for(int i=0;i<rows;i++){
		vector<int> v1(cols);
            for(int j=0;j<cols;j++){
                    cin>>v1[j];
            }
            arr.push_back(v1);
	}
	
	vector<int> v;
	merge_sorted_arrays(arr,rows,cols,v);
	for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;     
}