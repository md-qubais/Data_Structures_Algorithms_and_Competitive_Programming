#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void rev(char *ch){
int i=strlen(ch)-1;
int j=0;
while(j<i){
swap(ch[i],ch[j]);
	j++;
	i--;

}

}



int32_t main(){
	qubais_judge;
	IOS;
	char ch[100];
	cin>>ch;
	rev(ch);
	cout<<ch<<endl;
	return 0;   
}