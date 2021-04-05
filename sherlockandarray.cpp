#include<bits/stdc++.h>
using namespace std;
string balancedSums(vector<int> arr) {
string res="NO";
int left[arr.size()],right[arr.size()];
left[0]=arr[0];
right[arr.size()-1]=arr[arr.size()-1];
for(int i=1;i<arr.size();i++){
left[i]=arr[i]+left[i-1];
}
for(int i=arr.size()-2;i>=0;i--){
right[i]=arr[i]+right[i+1];
}
for(int i=0;i<arr.size();i++){
if(i==0&&right[i]==0){
res="YES";
break;
}else if(i==arr.size()-1&&left[i]==0){
res="YES";
break;
}
if(left[i]==right[i]){
res="YES";
break;
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
    int n;
    cin>>n;
    while(n>0){
    n--;
    int num;
    cin>>num;
    vector<int> arr;
    for(int i=0;i<num;i++){
     int a;
     cin>>a;
     arr.push_back(a);
    }
    cout<<balancedSums(arr)<<endl;
    }
    return 0;
}