#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<int> asteroidCollision(vector<int>&arr){
 	vector<int> ans;
 	deque<int> q;
 	for(int i=0;i<arr.size();i++){
 		if(arr[i]>0){
 			q.push_back(arr[i]);
 			continue;
 		}
 		if(arr[i]<0){
 			while(!q.empty() and q.back()>0 and q.back()<-(arr[i])){
 				q.pop_back();
 			}
 			if(!q.empty() and q.back()==-(arr[i])){
 				q.pop_back();
 				continue;
 			}
 			if(q.empty()){
 				q.push_back(arr[i]);
 				continue;
 			}
 			if(!q.empty() and q.back()>0 and q.back()<-(arr[i])){		
 				q.pop_back();
 				q.push_back(arr[i]);
 				continue;
 			}
 			if(!q.empty() and q.back()<0){
 				q.push_back(arr[i]);
 			}

 		}
 	}
 	while(!q.empty()){
 		ans.push_back(q.front());
 		q.pop_front();
 	}
 	return ans;
 }

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> ans=asteroidCollision(arr);
	for(auto it:ans){
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;
}
