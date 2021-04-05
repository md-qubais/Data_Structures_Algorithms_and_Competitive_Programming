#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int find_largest(int *arr,int n){
	int res=0;
	unordered_map<int,int> m;//number and its streak length
    for(int i=0;i<n;i++){
    	int no=arr[i];
    	//we are checking if the number itself
    	//starting the streak becasue the number
    	//which is just less and which is just 
    	//more than it is present of not
    	if(m.count(no-1)==0 and m.count(no+1)==0){
                m[no]=1;
                //here below we are checking
                //that if the steaks concat
                //by using two lenghts or streaks
                //or if there is a number just lesser
                //than that and eventually there is a number
                //just more than that then we can
                //expand that by adding the right expansion
                //and as well as the left expansion
                //by concatinating them into two lenghts
                //into a single streak
    	}else if(m.count(no-1) and m.count(no+1)){
             int l1=m[no-1];
             int l2=m[no+1];
             m[no-l1]=l1+l2+1;
             m[no+l2]=l1+l2+1;
        
             //here in below else if
             //we are basically checking if the left
             //part is present and the right part is not
             //present to expand the list in and
             //this expansion is known as the right expansion
    	}else if(m.count(no-1) and m.count(no+1)==0){
    		int len=m[no-1];
    		m[no]=len+1;
    		m[no-len]=m[no];
    		if(no==10){
    		}

    	}else{
    		int len=m[no+1];
    		m[no]=len+1;
    		m[no+len]=m[no];
    	}

    }
    for(auto it:m){
    	res=max(res,it.second);
    }

	return res;
}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int arr[]={14,5,1,2,6,3,7,8,9,13,15,11,12,13,17,4};
	int n=sizeof(arr)/sizeof(int);
	cout<<find_largest(arr,n)<<endl;
	return 0;     
}