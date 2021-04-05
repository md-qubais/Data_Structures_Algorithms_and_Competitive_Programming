#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
/*
int do_a(string str,int n,int *bi,int k2){
int res=INT_MIN;	
		for(int i=0;i<k2;i++){
		int count=0;
		string ans=str;
			for(int j=i;j<k2;j++){
				if(count==n){
					break;
				}
				if(ans[bi[j]]=='b'){
					ans[bi[j]]='a';
					count++;
				}
				if(j==bi[k2-1]){
					break;
				}
			}
		int num=0;
		for(int j=0;j<ans.length();j++){
			if(j==LONG_MAX){
				break;
			}
			if(ans[j]=='a'){
				num++;
			}else{
				res=max(res,num);
				num=0;
			}
		}
		res=max(res,num);
	}
return res;
}


int do_b(string str,int n,int *ai,int k1){
int res=INT_MIN;	
		for(int i=0;i<k1;i++){
		int count=0;
		string ans=str;
			for(int j=i;j<k1;j++){
				
				if(count==n){
					break;
				}
				if(ans[ai[j]]=='a'){
					ans[ai[j]]='b';
					count++;
				}
			}
			
		int num=0;
		for(int j=0;j<ans.length();j++){
			if(j==LONG_MAX){
				break;
			}
			if(ans[j]=='b'){
				num++;
			}else{
				res=max(res,num);
				num=0;
			}
		}
		res=max(res,num);
	}
return res;
}
*/

int do_a(string str,int n){
	int ans=0;
	int count=0;
	int s=0;
	int i=0;
	for(i=0;i<str.length();i++){
		if(str[i]=='b'){
			count++;
		}
		if(count>n){
			ans=max(ans,i-s);
			while(count>n){
				if(str[s]=='b'){
					count--;
				}
				s++;
			}
		}
		if(i==str.length()-1 and count<=n){
			ans=max(ans,i-s+1);
		}
	}
	return ans;
}

int do_b(string str,int n){
int ans=0;
	int count=0;
	int s=0;
	int i=0;
	for(i=0;i<str.length();i++){
		if(str[i]=='a'){
			count++;
		}
		if(count>n){
			ans=max(ans,i-s);
			while(count>n){
				if(str[s]=='a'){
					count--;
				}
				s++;
			}
		}
		if(i==str.length()-1 and count<=n){
			ans=max(ans,i-s+1);
		}
	}
	return ans;	

}



int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	string str;
	cin>>str;
	
	int a=0,b=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='a'){
			a++;
		}else{
			b++;
		}
	}
	if(a==0||b==0){
		cout<<str.length()<<endl;
		return 0;
	}
	if(n>str.length()){
		cout<<str.length()<<endl;
		return 0;
	}
	if(a>b and n>=b){
		cout<<str.length()<<endl;
		return 0;
	}
	if(b>a and n>=a){
		cout<<str.length()<<endl;
		return 0;
	}




	int ans1=INT_MIN;
	int ans2=INT_MIN;
	if(a>b){
		ans1=do_a(str,n);
	}
	else if(a==b){
		ans1=do_a(str,n);
		ans2=do_b(str,n);
	}    
	else{
		ans2=do_b(str,n);
	}
	cout<<max(ans1,ans2)<<endl;
		return 0;

}