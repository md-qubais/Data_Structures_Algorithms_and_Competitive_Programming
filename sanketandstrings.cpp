#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>k;
    string str;
    cin>>str;
    int a=0,b=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'){
            a++;
        }else{
        	b++;
        }
    }
    if(a==b){
    int max1=0;
    int max2=0;
    int ig1=0;
    int ig2=0;
    for(int i=0;i<str.length();i++){
        if(ig1<k){
        if(str[i]=='b'){
            max1++;
            ig1++;
        }else{
        	max1++;
        }
        }else{
        	if(str[i]=='a'){
                  max1++;
        	}else{
        		break;
        	}
        }
}
    for(int i=0;i<str.length();i++){
        if(ig2<k){
        if(str[i]=='a'){
            max2++;
            ig1++;
        }else{
        	max2++;
        }
        }else{
        	if(str[i]=='b'){
                  max2++;
        	}else{
        		break;
        	}
        }

    }
    cout<<max(max1,max2);
    }else if(a>b){
    	int num=0;
      for(int i=0;i<str.length();i++){
                
              if(num<k){
                if(str[i]=='b'){
                  str[i]='a';
                  num++;
                }
            }
      }
      int max1=0,max2=1;
      for(int i=1;i<str.length();i++){
             if(str[i]==str[i-1]){
                    max2++;
             }else{
             	max2=0;
             }
             if(max1<max2){
                    max1=max2;
             }
      }
    cout<<max1<<endl;
    }else{
    	int num=0;
      for(int i=0;i<str.length();i++){
                
              if(num<k){
                if(str[i]=='a'){
                  str[i]='b';
                  num++;
                }
            }
      }
      int max1=0,max2=1;
      for(int i=1;i<str.length();i++){
             if(str[i]==str[i-1]){
                    max2++;
             }else{
             	max2=0;
             }
             if(max1<max2){
                    max1=max2;
             }
      }

    cout<<max1<<endl;
    }
    return 0;
}