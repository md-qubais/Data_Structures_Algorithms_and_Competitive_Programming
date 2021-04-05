#include<bits/stdc++.h>
using namespace std;


int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<"*";
    for(int i=0;i<n-((n+1)/2)-1;i++){
    cout<<" ";
    }
    for(int i=0;i<(n+1)/2;i++){
   cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<(n-3)/2;i++){
    
     cout<<"*";
    for(int j=0;j<(n-3)/2;j++){
     cout<<" ";
     }
     cout<<"*"<<endl;
    }
    for(int i=0;i<n;i++){
     cout<<"*";
    }
    cout<<endl;
    for(int j=0;j<(n-3)/2;j++){
    for(int i=0;i<=((n-3)+1)/2;i++){
      cout<<" ";
    }
    cout<<"*";
    for(int i=0;i<((n-3)/2);i++){
   cout<<" ";
    }
    cout<<"*"<<endl;
}
  for(int i=0;i<(n+1)/2;i++){
  cout<<"*";
    }
    for(int i=0;i<(n-(n+1)/2)-1;i++){
  cout<<" ";
    }
    cout<<"*";

    return 0;
}