#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
string get_min(string s,string p){
	string res="";
    int sl=s.length();
    int pl=p.length();
    if(pl>sl){
    return "No String";
    }
    int FP[256]={0};
    int FS[256]={0};
    for(int i=0;i<pl;i++){
    	FP[p[i]]++;
    }

    int start=0;
    int start_idx=-1;
    int count=0;
    int min_len=INT_MAX;

    for(int i=0;i<sl;i++){
    	char ch=s[i];
    	FS[ch]++;

    	if(FP[ch]!=0 and FS[ch]<=FP[ch]){
    		count++;
    	}
    	if(count==pl){
                    char c=s[start];
                    while(FP[c]==0 or FP[c]<FS[c]){
                    	start++;
                    	FS[c]--;
                    	c=s[start];
                    }
                   int curr_len=i-start+1;
                   if(curr_len<min_len){
                   	min_len=curr_len;
                   	start_idx=start;
                   }

    	}
    }
if(start_idx==-1){
return "No String";
}

res=s.substr(start_idx,min_len);

return res;
}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	string s;
	getline(cin,s);
	string p;
	getline(cin,p);
	cout<<get_min(s,p)<<endl;
	return 0;     
}