#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//good subarray-->sum of array% sizeof array==0
//and tell how many subarrays are there
//i mean the count of good subarrays are there
void good_subarray_brute(int *arr,int n){
int count=0;
for(int i=0;i<n;i++){
    int sum=0;
	for(int j=i;j<n;j++){
     sum+=arr[j];
     if(sum%n==0){
     	count++;
     }
	}
}
cout<<count<<endl;
}

int32_t main(){
	qubais_judge;
	IOS;	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//here below is the brute force method
	//for finding the good subarrays
	

	//good_subarray_brute(arr,n);
	//you can un comment it for better 
	//understanding because its the best
	//brute force solution 

	//qubais tech calculate pre
	//or cummulative sum wiht using the pegion hole 
	//principle including one zero after taking mod in
	//the arrays
	int csum[100]={0};
	csum[0]=arr[0]%n;
	for(int i=1;i<n;i++){
		csum[i]=(csum[i-1]+arr[i])%n;
	}
	for(int i=0;i<n;i++){
      // cout<<csum[i]<<endl;
	}
	//now here from down here goes the peigon hole
	//principle
	/*int mod[100];
	mod[0]=0;
	for(int i=1;i<=n;i++){
		mod[i]=csum[i-1]%n;
	}*///we have calculate while calulcating the presum
	//or csum
   //here now we have to include the zeroth term
	//inside there we must have one empty array
	//where we have to store the zero value
	//every subarray will contain atleast one good array
    int freq[n]={0};//because we are getting mod till
    //0->n-1 so we have to do till 0->n make freq of that 0->n-1 we get
    freq[0]++;
    for(int i=0;i<n;i++){
    	freq[csum[i]]++;
    }
    for(int i=0;i<n;i++){
    cout<<freq[i]<<endl;
    }


    //now here ncr we can write as n(n-1)/2;
    int ans=0;
    for(int i=0;i<n;i++){
    	ans+=(freq[i]*(freq[i]-1))/2;
    }
cout<<ans<<endl;

	return 0;   
}