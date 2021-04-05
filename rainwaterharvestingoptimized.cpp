#include<bits/stdc++.h>
#include<conio.h>
#define ll      long long
using namespace std;   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    /*    cin.tie(NULL);
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int res=0;
    int water=0;
    int n=sizeof(arr)/sizeof(int);
    // BRUTE FORCE SOLUTION
    for(int i=1;i<n-1;i++){
    int leftmax=0;
    int rightmax=0;
    for(int j=i;j>=0;j--){
    if(arr[j]>leftmax){
    leftmax=arr[j];
    }
    }
    for(int j=i;j<n;j++){
    if(arr[j]>rightmax){
    rightmax=arr[j];
    }
    }
    int m=min(leftmax,rightmax);
    if(m>arr[i]){
    res+=m-arr[i];
    }
    }
    cout<<res<<endl;
    /*int left_max = 0; // Which stores the current max height of the left side
    int right_max = 0; // Which stores the current max height of the right side
    int lo = 0; // Counter to traverse from the left_side
    int hi = n - 1; // Counter to traverse from the right_side
    while (lo <= hi)
    {
    if (arr[lo] < arr[hi]) 
    {
    if (arr[lo] > left_max)
    {
    left_max = arr[lo]; // Updating left_max
    }
    else 
    {
    cout<<water<<"="<<water<<"+"<<left_max<<"-"<<arr[lo]<<"=";

      water += left_max - arr[lo]; // Calculating the ans
cout<<water<<endl;
}
lo++;
}
else
{
if (arr[hi] > right_max)
{
right_max = arr[hi]; // Updating right_max
}
else
{
cout<<water<<"="<<water<<"+"<<right_max<<"-"<<arr[hi]<<"=";

water += right_max - arr[hi]; // Calculating the ans

cout<<water<<endl;
}
hi--;
}
}
cout<<"atlast"<<endl;
cout<<water;*/
  int num;
  cin>>num;
  int arr[num];
  for(int i=0;i<num;i++){
   cin>>arr[i];
  }
  int s=0,e=num-1,level=0,res=0;
 while(s<e){
 int lower=arr[arr[s]<arr[e]?s++:e--];
 level=max(level,lower);
 res=res+level-lower;
 }

cout<<res<<endl;
       return 0; 
}