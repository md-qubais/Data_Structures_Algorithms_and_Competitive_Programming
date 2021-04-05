#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int infix(string str){
	stack<int> num;
	stack<int> op;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			continue;
		}
		if(str[i]=='+' or str[i]=='-' or str[i]=='*' or str[i]=='/' or str[i]=='('){
			if(str[i]=='*' and (op.empty() or op.top()!='/')){
				op.push(str[i]);
				continue;
			}
			if(str[i]=='/' and (op.empty() or op.top()!='*')){
				op.push(str[i]);
				continue;
			}
			if((str[i]=='*' and  op.top()=='/') or (str[i]=='/' and op.top()=='*') ){
				
				int n1=num.top();
				num.pop();
				int n2=num.top();
				num.pop();
				char operand=op.top();
				op.pop();
				if(operand=='*'){
					num.push(n2*n1);
				}else if(operand=='/'){
					num.push(n2/n1);
				}
				op.push(str[i]);
				continue;
			}
			if(str[i]=='+' and op.empty()==false and (op.top()=='/' or op.top()=='*')){
				int n1=num.top();
				num.pop();
				int n2=num.top();
				num.pop();
				char operand=op.top();
				op.pop();
				
				if(operand=='/'){
					num.push(n2/n1);
				}else if(operand=='*'){
					num.push(n2*n1);
				}
				op.push(str[i]);
				continue;
			}

			if(str[i]=='-' and op.empty()==false and (op.top()=='/' or op.top()=='*')){
				int n1=num.top();
				num.pop();
				int n2=num.top();
				num.pop();
				char operand=op.top();
				op.pop();
				if(operand=='/'){
					num.push(n2/n1);
				}else if(operand=='*'){
					num.push(n2*n1);
				}
				op.push(str[i]);
				continue;
			}
			if(str[i]=='+' or (op.empty() or op.top()!='-')){
				op.push(str[i]);
				continue;
			}
			if(str[i]=='-' or (op.empty() or op.top()!='+')){
				op.push(str[i]);
				continue;
			}
			if((str[i]=='+' and  op.top()=='-') or (str[i]=='-' and op.top()=='+') ){
				int n1=num.top();
				num.pop();
				int n2=num.top();
				num.pop();
				char operand=op.top();
				op.pop();
				if(operand=='*'){
					num.push(n2*n1);
				}else if(operand=='/'){
					num.push(n2/n1);
				}
				op.push(str[i]);
				continue;
			}
		}
		if(str[i]>='0' and str[i]<='9'){
			num.push(str[i]-'0');
			continue;
		}
		if(str[i]==')'){
		    while(op.top()!='('){
		    	int n1=num.top();
			    num.pop();
			    int n2=num.top();
			    num.pop();
			    char operand=op.top();
			    op.pop();

			    if(operand=='+'){
			    	num.push(n2+n1);
			    }else if(operand=='-'){
			    	num.push(n2-n1);
			    }else if(operand=='*'){
			    	num.push(n2*n1);
			    }else if(operand=='/'){
			    	num.push(n2/n1);
			    }
			}
			op.pop();
		}
	}

	//here below if no braces are given
	while(!op.empty()){
		int n1=num.top();
		num.pop();
		int n2=num.top();
		num.pop();
		int operand=op.top();
		op.pop();
		if(operand=='+'){
			    	num.push(n2+n1);
			    }else if(operand=='-'){
			    	num.push(n2-n1);
			    }else if(operand=='*'){
			    	num.push(n2*n1);
			    }else if(operand=='/'){
			    	num.push(n2/n1);
			    }
	}
	return num.top();
}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	getline(cin,s);
	cout<<infix(s);
    return 0;
}