#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
/*
int get_max(int *arr,int num){
	int max=0;
	int i=0;
for(;i<num;i++){
if(arr[i]>max){
max=arr[i];
}
}
return max;
}
*/
/*
void brute_force(int *arr,int num,int k){
for(int i=0;i<num;i++){
int j=i+k;
if(j<num){
int max=get_max(arr+i,k);
cout<<max<<" ";
}else{
	break;
}
}
}
*/
void get_max(int *arr,int num,int k){
		deque<int> Q(k);
	int i=0;
	for(;i<k;i++){
      while(!Q.empty() and arr[i]>arr[Q.back()]){
             Q.pop_back();
      }
      Q.push_back(i);
	}
	//now let us process the remaining elements
	for(;i<num;i++){
      cout<<arr[Q.front()]<<" ";
      //1.Remove the elements which are not the part of window
	 while(!Q.empty() and Q.front() <= i-k){
	 	Q.pop_front();
	  }
      //2.Remove the elements which are not useful
      //and are in the window
      while(!Q.empty() and arr[i]>=arr[Q.front()]){
       Q.pop_back();
       } 
      //3.add the new elements to the deque(Expansion)
    Q.push_back(i);
	}
	cout<<arr[Q.front()];
	cout<<endl;
}


//here we are going to implement 
//the get max method with my own method
void get_max_qubais(int *arr,int num,int k){
//using deque
	deque<int> q;
//first we have to process first k elements
	int i=0;
	for(;i<k;i++){
		while(!q.empty() and arr[i]>arr[q.back()]){
             q.pop_back();
		}
		q.push_back(i);
	}
	//now we have to process the next entire array
	
	for(;i<num;i++){
      cout<<arr[q.front()]<<" ";
      //now we have to remove the indices which are
      //not in our window
      while(!q.empty() and q.front() <= i-k){
            q.pop_front();
      }
      //now we have to remove the element which are
      //useless and are in the window
       while(!q.empty() and arr[q.front()]<=arr[i]){
                 q.pop_back();
         } 
      //now we have to expand the array
      q.push_back(i);
       }
       cout<<arr[q.front()];
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
	int num;
	int k;
	cin>>num;
	cin>>k;
	int arr[num];
	for(int i=0;i<num;i++){
       cin>>arr[i];
	}
	get_max_qubais(arr,num,k);
	cout<<endl;
}
	return 0;     
}