#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	priority_queue<pair<int,int>,vector<pair<int,int>>> q;
	int num,k;
	cin>>num>>k;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int i=0;
	int c=0;
	//first process the k elements
	for(;i<k;i++){
		pair<int,int> p;
		p.first=arr[i];
		p.second=i;	
		q.push(p);
		c++;
	}
	int j=1;

	for(;i<num;i++,j++){
		cout<<q.top().first<<" ";
		//remove the unwanted_elements
		while(!q.empty() and  q.top().second <j ){
			q.pop();
		}
		q.push(make_pair(arr[i],i));
	}
	cout<<q.top().first<<endl;
	return 0;   
}