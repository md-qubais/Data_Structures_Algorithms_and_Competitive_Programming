#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//so here we are calculating the stock span
//of the given days and as well as the given 
//time and price
//so we have to calculate the stock span
//as there is very very good and efficient technique
//to follow them and as well as there are real real
//good things to do in eventually times 
//that matters accordingly to the main frame
void stock_span(int *arr,int *res,int num){
	stack < pair<int,int> > s;
	res[0]=1;
    s.push(make_pair(arr[0],0));
    for(int i=1;i<num;i++){
              while(!s.empty() and s.top().first < arr[i]){
                  s.pop();
              }

              if(s.empty()==true){
                   res[i]=i+1;
                   s.push(make_pair(arr[i],i));
              }else{
              res[i]=i-s.top().second;
              s.push(make_pair(arr[i],i));
    }
}

}



int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int arr[num];
	int res[num];
	for(int i=0;i<num;i++){
        cin>>arr[i];
	}
	stock_span(arr,res,num);
	for(int i=0;i<num;i++){
     cout<<res[i]<<" ";
	}
	cout<<"END"<<endl;
	return 0;     
}