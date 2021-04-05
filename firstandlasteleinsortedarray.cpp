#include<bits/stdc++.h>
#define ll      long long
using namespace std;
//best method this is the art of problem solving  
int removeElement(vector<int>& nums, int val) {
int left=0,right=0;
while(right<nums.size()){
if(nums[right]!=val){
nums[left++]=nums[right];
}
right++;
}      
return left;
} 
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
         int a;
         cin>>a;
         v.push_back(a);
    }
    int key;
    cin>>key;
   int res=removeElement(v,key);
   for(auto it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
   }
   cout<<endl;
   cout<<res<<endl;
    return 0;
}