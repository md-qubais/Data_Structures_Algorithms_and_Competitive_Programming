#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class ProductOfNumbers {
public:
	  vector<int> v;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num==0){
            v.erase(v.begin(),v.end());
            return;
        }
        if(v.size()==0){
        	v.push_back(num);
        	return;
        }
        v.push_back(v[v.size()-1]*num); 
    }
    
    int getProduct(int k) {
        if(k>v.size()){
            return 0;
        }
        if(k==v.size()){
        	return v[v.size()-1];
        }
        return v[v.size()-1]/v[v.size()-k-1];
    }
};
int32_t main(){
	qubais_judge;
	IOS;
    ProductOfNumbers productOfNumbers;
    productOfNumbers.add(3);        
    productOfNumbers.add(0);        
    productOfNumbers.add(2);        
    productOfNumbers.add(5);        
    productOfNumbers.add(4);        
    cout<<productOfNumbers.getProduct(2)<<endl;
    cout<<productOfNumbers.getProduct(3)<<endl; 
    cout<<productOfNumbers.getProduct(4)<<endl;
    productOfNumbers.add(8); 
    cout<<productOfNumbers.getProduct(2)<<endl; 
	return 0;   
}