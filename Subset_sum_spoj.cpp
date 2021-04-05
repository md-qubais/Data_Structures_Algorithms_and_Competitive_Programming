#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool subetsums(int *in,int *out,int i,int j,int n){
if(i==n){
int sum=0;
bool b=false;
for(int i1=0;i1<j;i1++){
sum=sum+out[i1];
b=true;
}
if(sum==0 and b==true){
return true;
}
return false;
}
out[j]=in[i];
bool b1=subetsums(in,out,i+1,j+1,n);
bool b2=subetsums(in,out,i+1,j,n);
if(b1 or b2){
return true;
}
return false;
}



bool subetsums_using_bitmasking(int *arr,int a,int b,int n){
int res=0;
int num=(1<<n)-1;
for(int i=1;i<=num;i++){
int mask=i;
int j=0;
int sum=0;
bool bl=false;
while(mask>0){
if(mask&1){
sum=sum+arr[j];
bl=true;
}
j++;
mask=mask>>1;
}
if(sum>=a and sum<=b and bl==true){
res++;
}
}
return res;
}


//Actual problem starts from here
//input param is vector from question
//output vector is the possible type of
//subsets from the input of the question vector v
vector<int> subsets(vector<int> v){
vector<int> res;
int n=v.size();//n<=17--><=10^6
//bitmasking -->subsets
for(int i=0;i<(1<<n);i++){
int j=0;
int sum=0;
int mask=i;
while(mask>0){
if(mask&1){
sum=sum+v[j];
}
j++;
mask=mask>>1;
}
res.push_back(sum);
//including zero 
}
return res;
}

//spoj subsets sum problem
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	while(n>0){
     n--;
     int num,a,b;
     cin>>num>>a>>b;
     int n1=num/2;//dividing the array into half
     int n2=num-n1;//and here is the second half of the array
     vector<int> v1,v2;
     for(int i=0;i<n1;i++){
       int j;
       cin>>j;
       v1.push_back(j);
     }
     for(int i=0;i<n2;i++){
       int j;
       cin>>j;
       v2.push_back(j);
     }
    vector<int> res1=subsets(v1);
    vector<int> res2=subsets(v2);
     //atleast sort any vector
    //sort res2 or vector 2 for efficient sorting
    sort(res2.begin(),res2.end());
    int ans=0;
    for(int i=0;i<res1.size();i++){
     int lo=a-res1[i];
     int hi=b-res1[i];
     int m1=lower_bound(res2.begin(),res2.end(),lo)-res2.begin();
     int m2=upper_bound(res2.begin(),res2.end(),hi)-res2.begin();
     ans+=m2-m1;
    }
    cout<<ans<<endl;
	}
	return 0;     
}