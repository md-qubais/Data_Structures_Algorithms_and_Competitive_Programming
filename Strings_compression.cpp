#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int32_t main(){
	qubais_judge;
	IOS;
	int f1[26]={0};
    char  ch[10001];
    cin>>ch;
    char prev=ch[0];
    int count=1;
    for(int i=1;i<strlen(ch);i++){
    	if(ch[i]==prev){
    		count++;
    	}else if(count>=1 and prev!=ch[i]){
    		cout<<prev;
    		cout<<count;
    		prev=ch[i];
    		count=1;
    	}    }
    if(count>=1){
    	cout<<prev<<count<<endl;
    }

	return 0;   
}