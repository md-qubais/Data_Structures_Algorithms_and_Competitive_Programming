#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void sum_it_up(int *arr,int num,int key){
	//subsets using bitmasking
	int n=(1<<num)-1;
	for(int i=1;i<=n;i++){
		int mask=i;
		int j=0;
		int k=0;
		int ans[num];
		while(mask){
			if(mask&1){
				ans[k++]=arr[j];
			}
			j++;
			mask=mask>>1;
		}
		int sum=0;
		for(int i=0;i<k;i++){
			sum+=ans[i];
		}
		
		if(sum==key){
			for(int i=0;i<k;i++){
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}
	}

}



https://hack.codingblocks.com/app/practice/2/486/problem
https://hack.codingblocks.com/app/practice/2/704/problem
https://hack.codingblocks.com/app/practice/2/68/problem
https://hack.codingblocks.com/app/practice/2/411/problem
https://hack.codingblocks.com/app/practice/2/410/problem
https://hack.codingblocks.com/app/practice/2/471/problem
https://hack.codingblocks.com/app/practice/2/991/problem
https://hack.codingblocks.com/app/practice/2/186/problem









int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	sort(arr,arr+num);
	sum_it_up(arr,num,k);
	return 0;   
}