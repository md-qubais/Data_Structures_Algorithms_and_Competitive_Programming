#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
    int partition(vector<int>&v,int l,int h){
        int i=l;
        int j=l;
        int pivot=v[h];
        while(j<=h){
            if(v[j]<=pivot){
               swap(v[i],v[j]);
                i++;
                j++;
                continue;
            }else 
            j++;
        }
        return i-1;
    }
    int ans(vector<int>&v,int l,int h,int k){
        int idx=partition(v,l,h);
            if(idx==k){
                return v[idx];
            }
        if(idx>k){
            return ans(v,l,idx-1,k);
        }
        return ans(v,idx+1,h,k);
    }
    int findKthLargest(vector<int>& nums, int k) {
       random_shuffle(nums.begin(),nums.end());
       return ans(nums,0,nums.size()-1,nums.size()-k);
    }
    int32_t main(){
    qubais_judge;
    IOS;
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int k;
    cin>>k;
    cout<<findKthLargest(ans,k)<<endl;
    return 0;
}