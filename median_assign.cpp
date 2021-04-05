#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
			//max heap
	priority_queue<int> left;
	//min heap
	priority_queue<int,vector<int>,greater<int> > right;

		int num;
		cin>>num;
		int d;
		float mid;
		for(int i=0;i<num;i++){
			cin>>d;
                    if(i==0){
                         mid=d;
                         left.push(d);        
                    }else{
                     if(left.size()>right.size()){
                              if(d>mid){
                                    right.push(d);
                              }else{
                                    right.push(left.top());
                                    left.pop();
                                    left.push(d);
                              }
                              mid=(left.top()+right.top())/2;
                     }else if(right.size()==left.size()){
                                    if(d>mid){
                                      right.push(d);
                                      mid=right.top();
                                    }else{
                                          left.push(d);
                                          mid=left.top();
                                    }
                     }else{
                     	if(d>mid){
                     		left.push(right.top());
                     		right.pop(); 
                     		right.push(d);
                     	}else{
                                left.push(d);
                     	}
                     	mid=(right.top()+left.top())/2;
                     }
                    }
           cout<<mid<<" ";
		}
		cout<<endl;

	}
	return 0;     
}