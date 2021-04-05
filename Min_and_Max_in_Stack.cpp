#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//here we are writing a program 
//To find min in o(1) time  complexicity
//but here we are actually using o(n) space complexity
class Stack_1{
public:
	vector<int> v1,v2;
	void push(int i){
       if(v1.empty()){
                   v1.push_back(i);
                   v2.push_back(i);
       }else{
       	v1.push_back(i);
       	int m=min(i,*v1.rbegin());
       	v2.push_back(m);
       }
	}
	int pop(){
		int num=*v1.rbegin();
		v1.pop_back();
		v2.pop_back();
		return num;
	}
	int getmin(){
		 return *v2.rbegin();
	}
};

//now here we are going to write a class
//and its functionality that we are going to
//get the minimum from the stack in o(1) time and space
class Stack{
public:
	vector<int> v1;
	int min;
	void push(int i){
         v1.push_back(i);
	}
	int pop(){
       int num=*v1.rbegin();
       v1.pop_back();
       return num;
	}
	int top(){
		return *v1.rbegin();
	}
	int getmin(){
		return min;
	}
};

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
    int t;
    cin>>t;
    while(t--){
    	int num;
    	cin>>num;
    	Stack s;
    	while(num--){
    		int n;
    		cin>>n;
    		if(n==1){
    			int no;
    			cin>>no;
                s.push(no);
    		}else if(n==2){
    			cout<<s.pop()<<" ";
    		}else{
               cout<<s.getmin()<<" ";
    		}

    	}
    	cout<<endl;
    }
	return 0;     
}