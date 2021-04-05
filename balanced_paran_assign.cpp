#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
//'{', '}' , '(' , ')', '[' , ']
bool isBalanced(char *ch,int num){
	stack<char> s;
	for(int i=0;i<num;i++){
           if(ch[i]=='{' or ch[i]=='[' or ch[i]=='('){
             s.push(ch[i]);
           }else{
           	if(ch[i]==')' and s.top()=='('){
                  s.pop();
           	}
           	else if(ch[i]=='}' and s.top()=='{'){
                  s.pop();
           	}
           	else if(ch[i]==']' and s.top()=='['){
                    s.pop();
           	}else{
           		return false;
           	}
           }

	}

	if(s.empty()==true){
		return true;

	}
return false;
}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	char ch[100];
	cin>>ch;
	if(isBalanced(ch,strlen(ch))){
      cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

    return 0;
}