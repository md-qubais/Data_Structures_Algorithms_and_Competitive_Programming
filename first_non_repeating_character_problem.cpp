#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;


//here this is the brute force solution 
//to find the first non repeating character
//in the stream of integers
void brute_force(char *ch,char *out,int n){
	int arr[28]={0};
	arr[ch[0]-97]++;
	char prev=ch[0];
	out[0]=prev;
	for(int i=1;i<n;i++){
     arr[ch[i]-97]++;
     if(arr[prev-97]==1){
             out[i]=prev;
     }
     else if(arr[ch[i]-97]==1){
       out[i]=ch[i];
       prev=ch[i];
     }else{
     	if(arr[prev-97]==1){
              out[i]=prev;
     	}else{
     		out[i]='1';
     	}
     }
	}
}



//here is the optimized solution
//to find the first non repeating character
//in the stream of character
//by using queue and it is some optimized technique
void optimized(char *ch,char *out,int n){
	queue<char> q;
	int arr[28]={0};
	out[0]=ch[0];
	q.push(ch[0]);
	arr[ch[0]-97]++;
	for(int i=1;i<n;i++){
      arr[ch[0]-97]++;
      q.push(ch[i]);
      while(!q.empty() and arr[q.front()-97]>1){
      q.pop();
      }
      if(q.empty()==true){
        out[i]='1';
      }else{
      	out[i]=q.front();
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
	char ch[100];
	cin>>ch;
	int n=strlen(ch);
	char out[n];
	brute_force(ch,out,n);
	for(int i=0;i<n;i++){
   cout<<out[i]<<" ";
	}
	cout<<endl;
    return 0;
}