#include<bits/stdc++.h>
using namespace std;
struct node
{
	char data;
	struct node *next;
	struct node *prev;

}*first=NULL,*last=NULL;
void push(struct node *p,char key){
if(first==NULL){
first=new node;
first->data=key;
first->next=NULL;
first->prev=NULL;
last=first;
}else{
	struct node *temp=new node;
	temp->data=key;
	temp->next=NULL;
	temp->prev=last;
	last->next=temp;
	last=temp;
}
}
bool pop(struct node *p){
bool b=true;
if(first==NULL){
return false;
}
else if(last==first){
first=NULL;
return true;
}else{
last=last->prev;
last->next=NULL;
return true;
}
}
char top(struct node *p){
return last->data;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string str;
	cin>>str;
	string res="";
	for(int i=0;i<str.length();i++){
          if(str[i]=='('||str[i]==')'){
               res=res+str[i];
          }
	}
	bool b=true;
	for(int i=0;i<res.length();i++){
    if(res[i]=='('){
     push(first,res[i]);
    
    }else{
    b=	pop(first);
    }
     if(b==false){
       break;
     }
    }
	
	if(b==true){
    cout<<"the paranthesis is balanced"<<endl;
	}else{
	cout<<"The paranthesis is not balanced"<<endl;	
	}
	return 0;
}