#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int h[100000+1]={0};
//we can just also try by using pair
//and also we can also just try by using min or max heap
//and by defining our class by storing that content
//in the heap by our own functors sorting algorithm
bool compare(int n1,int n2){
if(h[n1]==h[n2]){
return n1<n2;
}
return h[n1]>h[n2];
}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
		int num,k;
		cin>>num>>k;
		vector<int> v;
		int c=1;
		for(int i=0;i<num;i++){
                   int n;
                   cin>>n;
                   h[n]++;
                   if(c<=k){
                   	v.push_back(n);
                   	c++;
                   	sort(v.begin(),v.end());
                   	for(int x:v){
                   		cout<<x<<" ";
                   	}
                   }else{
                   	auto it=find(v.begin(),v.end(),n);
                   	if(it!=v.end()){
                          v.erase(it);
                          v.push_back(n);
                   	}else{
                                 if(n<(*v.rbegin())){
                                       auto it=find(v.begin(),v.end(),*v.rbegin());
                                       v.erase(it);
                                       v.push_back(n);
                                 }else if(h[n]>h[v[0]]){
                                      v.erase(v.begin()+v.size()-1);
                                      v.push_back(n);
                                 }
                   	}
                    sort(v.begin(),v.end(),compare);
                    for(int x:v){
                    	cout<<x<<" ";
                    }     
                             
                   }
		}
		for(int i=0;i<100000+1;i++){
             h[i]=0;
		}
		cout<<endl;
	}
	return 0;     
}