#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int count(int *arr,int *ans1,int *ans2,int i,int j1,int j2,int num){
	if(i==num){
		int sum1=0;
		int sum2=0;
		for(int i=0;i<j1;i++){
			sum1+=ans1[i];
		}
		for(int i=0;i<j2;i++){
			sum2+=ans2[i];
		}
		if(sum1==sum2 and j1+j2==num){
			return 1;
		}
		return 0;
	}
	ans1[j1]=arr[i];
 int n1=	count(arr,ans1,ans2,i+1,j1+1,j2,num);
	ans2[j2]=arr[i];
int n2=	count(arr,ans1,ans2,i+1,j1,j2+1,num);
return n1+n2;
}



void subsets(int *arr,int *ans1,int *ans2,int i,int j1,int j2,int num){
	if(i==num){
		int sum1=0;
		int sum2=0;
		for(int i=0;i<j1;i++){
			sum1+=ans1[i];
		}
		for(int i=0;i<j2;i++){
			sum2+=ans2[i];
		}
		if(sum1==sum2 ){
			cout<<" ";
			for(int i=0;i<j1;i++){
				cout<<ans1[i]<<" ";
			}
			cout<<"and"<<" ";
			for(int i=0;i<j2;i++){
				cout<<ans2[i]<<" ";
			}
			cout<<endl;
		}
		return;
	}
	ans1[j1]=arr[i];
	subsets(arr,ans1,ans2,i+1,j1+1,j2,num);
	ans2[j2]=arr[i];
	subsets(arr,ans1,ans2,i+1,j1,j2+1,num);
}
int32_t main(){
	qubais_judge;
	IOS;	
	int num;
	cin>>num;
	int ans1[num];
	int ans2[num];
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	subsets(arr,ans1,ans2,0,0,0,num);
	cout<<count(arr,ans1,ans2,0,0,0,num)<<endl;
	return 0;   
}