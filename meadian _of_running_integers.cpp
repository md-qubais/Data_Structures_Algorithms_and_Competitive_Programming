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
	//this is max heap
	priority_queue<int> left;
	//this is mean heap
	priority_queue<int,vector<int>,greater<int>> right;
    int d;
    cin>>d;
    float mid=d;
    cout<<"median:"<<mid<<endl;
    cin>>d;
    left.push(d);
    while(d!=-1){
    	if(left.size()>right.size()){
                  if(d<mid){
                    right.push(left.top());
                    left.pop();
                    left.push(d);

                  }else{
                    right.push(d);
                  }
                  mid=(right.top()+right.top())/2;
    	}
        else if(left.size()==right.size()){
                    if(d<mid){
                         left.push(d);
                         mid=left.top();
                    }else{
                    	right.push(d);
                    	mid=right.top();
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

     cin>>d; 
     cout<<"median:"<<mid<<endl;
    }

	return 0;     
}