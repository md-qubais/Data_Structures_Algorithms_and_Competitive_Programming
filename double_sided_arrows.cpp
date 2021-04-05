#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	if(n==1){
		cout<<1<<endl;
		return 0;

	}
	int num=n;
	num=num-1;
	int k=4;
	for(int s=num;s>=1;s--){
		cout<<"  ";
	}
	num=num-2;
	cout<<1;
	cout<<endl;
	for(int i=2;i<=n/2+1;i++){
		for(int s=num;s>=1;s--){
          cout<<"  ";
		}
		num=num-2;
		for(int j=i;j>=1;j--){
			cout<<j<<" ";
		}

		//we have to provide spaces here
		for(int s=i;s>=2;s--){
			cout<<"  ";
		}
		if(i>=3){
            for(int s=1;s<k-1;s++){
            	cout<<" ";
            }
            k+=2;
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}

    //now here is the lower part 
    //of the pattern
    int counter=n/2;
    num=n/2+1;
    if(n>3){
    	int k=4;
    	int count=1;
    for(int i=n/2;i>1;i--){
       for(int s=k;s>=1;s--){
       	cout<<" ";
       }
       count++;
       k=4*count;
       for(int j=i;j>=1;j--){
       	cout<<j<<" ";
       }
       for(int s=i-1;s>=1;s--){
       	cout<<"  ";
       }
       counter=i*2-4;
         for(int s=1;s<=counter;s++){
          cout<<" ";
         }       


       for(int j=1;j<=i;j++){
       	cout<<j<<" ";
       }
       cout<<endl;
    }          
    }else{
    for(int i=n/2;i>1;i--){
       for(int s=num;s>=1;s--){
       	cout<<" ";
       }
       num*=2;
       for(int j=i;j>=1;j--){
       	cout<<j<<" ";
       }
       cout<<endl;
    }
}
     for(int i=1;i<=n-1;i++){
        cout<<"  ";
     }
     cout<<1<<endl;




	return 0;   
}