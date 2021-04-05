#include<bits/stdc++.h>
#define ll      long long
using namespace std;   

int makingAnagrams(string s1, string s2) {
int arr1[28]={0};
int arr2[28]={0};
for(int i=0;i<s1.length();i++){
char ch=s1[i];
arr1[ch-96]++;
}
for(int i=0;i<s2.length();i++){
char ch=s2[i];
arr2[ch-96]++;
}
int res=0;
for(int i=1;i<28;i++){
	if(arr1[i]!=arr2[i]){
     int m1=max(arr1[i],arr2[i]);
     int m2=min(arr1[i],arr2[i]);
     res=res+m1-m2;
	}
}
return res;
}

int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<makingAnagrams(s1,s2);
return 0;
}