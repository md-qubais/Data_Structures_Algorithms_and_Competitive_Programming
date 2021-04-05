#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
string find_window(string s,string p){
int sl=s.length();
int pl=p.length();
//1.corner case
if(pl>sl){
	return NULL;
}
//2.frequency map for both of the strings
int FS[256]={0};
int FP[256]={0};

for(int i=0;i<pl;i++){
FP[p[i]]++;
}

int min_length=INT_MAX;
int count=0;
int start_idx=-1;
int start=0;//left point for shrinking the window
//3.sliding window ->expansion and contraction
//+ update the min size or the min window
//and first create the window
for(int i=0;i<sl;i++){
char ch=s[i];
FS[ch]++;

//maintain the count of characters matched
if(FP[ch]!=0 and FS[ch]<=FP[ch]){
count++;
}

//if all the characters are matched
//that means we got one substring window that matches
//the patter from the given string
if(count==pl){
//we can strart shrinking the window from the left
	//start shrinking the window
	//loop to remove all unwanted characters
	char temp=s[start];
	while(FP[temp]==0 or FS[temp]>FP[temp]){
         FS[temp]--;
         start++;
         temp=s[start];
	}
   int curr_len=i-start+1;
   if(curr_len<min_length){
   	min_length=curr_len;
   	start_idx=start;
   }
}

}
if(start_idx==-1){
	//no such window find
	return NULL;
}
string res=s.substr(start_idx,min_length);
return res;
}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	string s,p;
	cin>>s;
	cin>>p;
	cout<<find_window(s,p)<<endl;
	return 0;     
}