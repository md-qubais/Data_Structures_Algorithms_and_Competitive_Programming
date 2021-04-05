#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;	
	int n1;
	cin>>n1;
	int arr1[n1];
	for(int i=0;i<n1;i++){
       cin>>arr1[i];
	}
	int n2;
	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++){
         cin>>arr2[i];
	}
	int largest=max(n1,n2);
	int ans[largest];
	int left=0;
	int f=n1-1;
	int s=n2-1;
	for(int i=largest-1;i>=0;i--){

               if(f>=0 and s>=0){
				   int num=arr1[f]+arr2[s]+left;
				   if(num>9){
				   	ans[i]=num%10;
					  left =num/10;
					  
				   }else{
					   ans[i]=num;
					   left=0;
				   }
                     f--;
                     s--;
			   }   else if(f>=0){
                    int num=arr1[f]+left;
                    if(num>9){
                     ans[i]=num%10;
                       left=num/10;
                    	}

                    else{
                        ans[i]=num;
                        left=0;
                    }
                    
                  f--;
			   }   else{
			   	    int num=arr2[s]+left;

                    if(num>9){
                    	ans[i]=num%10;
                    	left=num/10;
             
                    	
                      
                    }else{
                        ans[i]=num;
                        left=0;
                    }
                   
                   s--;
			   }  

	}
         
         if(left>0){
         	cout<<left<<", ";

         }
	for(int i=0;i<largest;i++){
     cout<<ans[i]<<", ";
	}
	cout<<"END";
	return 0;   
}