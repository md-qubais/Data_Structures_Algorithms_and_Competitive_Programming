#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//here now we are going to implement stack 
//data structure using vector
//here now we have make the stack class
//as a template class we can use generic type
//to make it any form ie int,string,char many forms
//typename T or class T
template<class T>
class Stack{
private:
	vector<T> v;
public:
    void push(T num){
    	v.push_back(num);
    }
    bool isEmpty(){
    	return v.size()==0;
    }
    T top(){
    	return v[v.size()-1];
    }
    void pop(){
    	v.pop_back();
    }
    T size(){
    	return v.size();
    }
};



//below the two functions
//insert_at_bottom and reverse_stack_rec
//is implemented by qubais method/tech
void insert_at_bottom(stack<int> &s1,int num){
if(s1.empty()==true){
s1.push(num);
return ;
}
int num2=s1.top();
s1.pop();
insert_at_bottom(s1,num);
s1.push(num2);
}
void reverse_stack_rec(stack<int> &s1){
if(s1.empty()==true){
return ;
}
int num=s1.top();
s1.pop();
reverse_stack_rec(s1);
insert_at_bottom(s1,num);
}





bool balanced(char *s){
	stack<char> s1;
for(int i=0;s[i]!='\0';i++){
if(s[i]=='('){
s1.push(s[i]);
}else if(s[i]==')'){
  if(s1.top()=='('){
        s1.pop();
  }
}
}
if(s1.empty()==true){
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
  	/*Stack<string> s;
	s.push("mohammed qubaisuddin");
	s.push("mohammed Imaduddin");
	s.push("mohammed raqeebuddin");
	s.push("mohammed dawooduddin");
	while(!s.isEmpty()){
         cout<<s.top()<<endl;
         s.pop();
	}
    */
    //now we are going to learn about 
    //stack stl inbuilt methods and functions
    //of stack class or the stack container
    

    //here in the below code we have reversed
    //the stack using 1 extra stack
   /* stack<int> s1,s2;
    cout<<"stack before reversing it"<<endl;
   
    for(int i=1;i<=5;i++){
     s1.push(i);
    }
    s2=s1;
    while(!s1.empty()){
      cout<<s1.top()<<endl;
      s1.pop();
    }
   
   s1=s2;
   while(!s2.empty()){
s2.pop();
   }
    cout<<"stack after reversing it"<<endl;
    int n=5;
    

    for(int i=0;i<n;i++){
         int x=s1.top();
         s1.pop();
         for(int j=i;j<n-1;j++){
                  s2.push(s1.top());
                  s1.pop();

         }
            s1.push(x);
            while(!s2.empty()){
                    s1.push(s2.top());
                    s2.pop();
            }

    }
    while(!s1.empty()){
   cout<<s1.top()<<endl;
   s1.pop();
    }*/
  //now here we are going to reverse the stack using 
	//recursion
/*stack<int> s1;
for(int i=1;i<=5;i++){
s1.push(i);
}
reverse_stack_rec(s1);
while(!s1.empty()){
cout<<s1.top()<<endl;
s1.pop();
}
*/
	//balanced paranthesis
	char *s="(a+b)+c-((d*d)+(a+b)";
	if(balanced(s)){
     cout<<"The paranthesis are balanced"<<endl;
	}
	else{
		cout<<"The paranthesis are not balanced"<<endl;
	}
	return 0;     

}