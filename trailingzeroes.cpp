#include<bits/stdc++.h>
using namespace std;


int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    //the trailing zeroes of the factorial consists
   //if the number if either multiple of 2 or multiple of 5
    //but multiple of 2 are more when compare to multiple of 5
    //thats why nos of 5 are smaller than number of 2 thats why we compare 
    //with nos of 5


    int num;
         cin>>num;
         int ans=0;
         int p=5;
         while(num/p>0){
              ans=ans+num/p;
              p=p*5;
         }
         if(ans==0){
             cout<<1<<endl;
         }
         else
         {cout<<ans<<endl;
         }
     
	//lets code Qubais
	return 0;
}