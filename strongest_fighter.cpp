#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
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
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	//now we have to process the first k elements 
	//using dequeue
	deque<int> q;
	int i=0;
	for(;i<k;i++){
      while(!q.empty() and arr[q.back()]<arr[i]){
        q.pop_back();
      }
      q.push_back(i);
	}
	//here we processed the first k elements
	//now we have to process the next all elements
    for(;i<num;i++){
     cout<<arr[q.front()]<<" ";
     //now here we have to remove the elements
     //which are not present in the window
     while(!q.empty() and q.front()<=i-k){
          q.pop_front();
     }
     //now we have to remove the elements which
     //are useless and are not greater than the given element
     while(!q.empty() and arr[q.back()]<arr[i]){
     	q.pop_back();
     }
     //here now we have to exoand our array
     q.push_back(i);
    } 
    cout<<arr[q.front()];
	return 0;     
}