#include<bits/stdc++.h>
using namespace std;

string gridSearch(vector<string> G, vector<string> P) {

string ans="NO";
int j=0;
int ind=0;
int index=0;
int c=0;
for(int i=0;i<G.size()&&j<P.size();i++){
ind=index;
index=G[i].find(P[j]);
if(c==0){
if(index==-1){
j=0;
c=0;
}else{
j++;
c=1;
}
}
else if(c==1){
if(index==G[i-1].find(P[j-1],index)&&index!=-1){
j++;
}else {
j=0;c=0;i=i-1;
}
}
}

if(j==P.size()){
ans="YES";
}

return ans;
}


int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  cin.get();
  while(n>0){
  n--;
  int rows,cols;
  cin>>rows>>cols;
  cin.get();
  string str[rows];
  vector<string> G,P;
  for(int i=0;i<rows;i++){
     cin>>str[i];
     G.push_back(str[i]);
  }
  cin>>rows>>cols;
  cin.get();
  string str1[rows];
  for(int i=0;i<rows;i++){
  cin>>str1[i];
  P.push_back(str1[i]);
  }
  string ans=gridSearch(G,P);
  cout<<ans<<endl; 
  }
  return 0;
}