#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
int *s;
int pos=0;
int size=0;
int max=0;
void push(int val){
if(size==0){
s=new int[5];
size=5;
}
else if(pos==size){
int *old=s;
s=new int[2*size];
size=size*2;
for(int i=0;i<pos;i++){
s[i]=old[i];
}
delete []old;
}

s[pos++]=val;
if(val>=max){
max=val;
}
}
int peek(){
	return s[pos-1];
}
int pop(){
	int a=s[pos-1];
	pos=pos-1;
	 max=0;
	for(int i=0;i<pos;i++){
             if(s[i]>=max){
                max=s[i];
             }

	}
	
return a;
}
};
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.pop();
    return 0;
 }
