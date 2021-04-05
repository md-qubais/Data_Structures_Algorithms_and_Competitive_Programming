#include<bits/stdc++.h>
using namespace std;
vector<string> cavityMap(vector<string> grid) {
vector<string> res;
int rows;
int cols;
rows=grid.size();
cols=grid[0].length();
bool down,up,rside,lside;
for(int i=0;i<rows;i++){
	string str="";
	for(int j=0;j<cols;j++){    
        down=up=rside=lside=true;
       if(i!=0&&i<rows-1&&j!=0&&j<cols-1){  
          int u=i-1;
          if(grid[u][j]>=grid[i][j]){
            up=false;
          }
          int d=i+1;
          if(grid[d][j]>=grid[i][j]){
            down=false;
          }
           int l=j-1;
           if(grid[i][l]>=grid[i][j]){
               lside=false;
           }
          int r=j+1;
          if(grid[i][r]>=grid[i][j]){
               rside=false;
          }
     if(rside==true&&lside==true&&up==true&&down==true){
      str=str+'X';
    }else
    {
str=str+grid[i][j];
    }
}
else{
	str=str+grid[i][j];
}
	}
	res.push_back(str);
}
return res;
}



vector<int> climbingboard(vector<int> scores,vector<int> alice){
vector<int> res,ans;
ans.push_back(scores[0]);
for(int i=1;i<scores.size();i++){
if(find(ans.begin(),ans.end(),scores[i])==ans.end()){
ans.push_back(scores[i]);
}
}
sort(ans.begin(),ans.end(),greater<int>());
for(int i=0;i<alice.size();i++){
if(find(ans.begin(),ans.end(),alice[i])==ans.end()){
ans.push_back(alice[i]);
sort(ans.begin(),ans.end(),greater<int>());
}
for(int k=0;k<ans.size();k++){
if(ans[k]==alice[i]){
res.push_back(k+1);
break;
}
}
}


return res;
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
    vector<int> s;
    for(int i=0;i<n;i++){
         int b;
         cin>>b;
         s.push_back(b);
    }
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    vector<int> res;
    res=climbingboard(s,a);
    for(int i=0;i<res.size();i++){
   cout<<res[i]<<endl;
    }
   return 0;
}