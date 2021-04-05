#include<bits/stdc++.h>
#include<conio.h>
#define ll      long long
using namespace std;   
int findMin(vector<int>& nums) {
int res=INT_MAX;
int s=0;
int e=nums.size()-1;
while(s<=e){
int mid=(s+e)/2;
if(nums[s]<=nums[mid]){
res=min(res,nums[s]);
s=mid+1;
}else{
if(nums[mid]<=nums[e]){
res=min(res,nums[mid]);
e=mid-1;
}
else{
	res=min(res,nums[mid]);
	s=mid+1;
}
}


}

       return res; 
}

int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int num;
      cin>>num;
      vector<int> res;
      for(int i=0;i<num;i++){
       int a;
       cin>>a;
       res.push_back(a);
      }
      cout<<findMin(res)<<endl;
      return 0;
  }
 