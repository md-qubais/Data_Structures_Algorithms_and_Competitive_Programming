#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int myAtoi(string str) {
	int ans=0;
	int neg=0;
	int pos=0;
	int hit=0;
	for(int i=0;i<str.length();i++){
		if((hit!=0 and (str[i]=='+' or str[i]=='-'))){
			return 0;
		}
		if(hit!=0 and str[i]==' '){
			if(neg==1){
				return -ans;
			}
			return ans;
		}
		if(str[i]=='-'){
			neg=1;

			continue;
		}
		if(str[i]=='+'){
			continue;
			pos=1;
		}
		if(str[i]==' ' ){
			continue;
		}
		else if(str[i]>='0' and str[i]<='9'){
			hit=1;
			ans=ans*10+str[i]-'0';if(neg==1){
				ans=-ans;
                if(ans<INT_MIN){
                    return INT_MIN;
                }
            }
            if(ans>INT_MAX){
                return INT_MAX;
            }
            if(neg==1){
            	ans=-ans;
            }
			
		}else if(str[i]=='.'){
			break;
		}else{
			break;
		}
		if(neg==1 and pos==1){
			return 0;
		}

	}
	if(neg){
		ans=-ans;
	}
	if(ans<INT_MIN){
		return INT_MIN;
	}
	if(ans>INT_MAX){
		return INT_MAX;
	}
	return ans;
}        

int32_t main(){
	qubais_judge;
	IOS;
	string str;
	getline(cin,str);
	cout<<myAtoi(str)<<endl;
	return 0;   
}