#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;

int length_of_longest(char *a){
	int n=strlen(a);
	int current_length=1;
	int max_length=1;
	int visisted[256];
	for(int i=0;i<256;i++){
        visisted[i]=-1;
	}
	visisted[a[0]]=0;
	for(int i=1;i<n;i++){
    int last_occ=visisted[a[i]];
    //Expansion
    if(last_occ==-1 or i- current_length>last_occ){
    current_length+=1;
    max_length=max(max_length,current_length);
    }
    //Expansion + Contradaction
    else{
    	max_length=max(current_length,max_length);
    	current_length=i - last_occ;
    }
    visisted[a[i]]=i;
	}
	return max_length;
}


int length_of_longest_using_deque(string ch){
int res=1;
int prev=0;
int current_max=1;
int visited[28]={0};
int indices[28];
indices[ch[0]-97]=0;
visited[ch[0]-97]=1;
for(int i=1;i<ch.length();i++){
if(visited[ch[i]-97]==1){
int index=indices[ch[i]-97];
indices[ch[i]-97]=i;
if(index>=prev){
current_max=i-index;
prev=index+1;
res=max(current_max,res);
}else{
	current_max++;
	res=max(res,current_max);
}
}else{
	current_max++;
	visited[ch[i]-97]=1;
	indices[ch[i]-97]=i;
    res=max(current_max,res);
}

}

return res;
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
	string str;
	cin>>str;
	cout<<length_of_longest_using_deque(str)<<endl;
	}
	return 0;     
}