#include<iostream>
#include<cstring>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
#define SIZE 1000
using namespace std; 
//char strings[100][100];
int str=0;
char **stack,**top; 
int minimum=SIZE ;

void display(){
	if(stack==top){
		cout<<"stack is empty no elemets to display"<<endl;
 return;
	}
	cout<<"Elements in stack are:"<<endl;
	char **i=top;
  while((top-1)>=stack){
  cout<<*(top-1)<<endl;
   top--;
  }
  top=i;
}



int isEmpty(){
	if(stack==top){
          return 1;
	}
	return 0;
}


void push(char *ch){
cout<<endl;
if((stack+minimum)!=top){
*top=(char*)malloc(100*sizeof(char));
int n=strlen(ch);
//strcpy(strings[str],ch);
//str++;
//*top=ch;
strcpy(*top,ch);

}else{
minimum=minimum*2;
stack=(char**)realloc(stack,minimum*sizeof(char*));
*top=(char*)malloc(100*sizeof(char));
//strcpy(strings[str++],ch);
//*top=ch;
strcpy(*top,ch);
}
top=top+1;
}

void pop(){
if(stack==top){
	cout<<"stack is empty cannot popout the element"<<endl;
}else {
	str--;
	top--;
}
}

void create_stack(){
	stack=(char**)malloc(minimum*sizeof(char*));
	if(stack==NULL){
      cout<<"Error creating stack"<<endl;
	exit(0);
	}
	top=stack;
}
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	create_stack();
    while(1){
      cout<<"________________________________________________________"<<endl;
       cout<<"Enter 1 to push string in stack"<<endl;
       cout<<"Enter 2 to pop string from the stack"<<endl;
       cout<<"Enter 3 to display all the elements of the stack"<<endl;
       cout<<"Enter 4 to exit"<<endl;
      cout<<"________________________________________________________"<<endl;
       int ch;
       cin>>ch;
       if(ch>3){
       	cout<<"Exiting the program"<<endl;
        exit(0);
       }
       switch(ch){
       	case 1:   
       	char c[100];
       	cout<<"Enter the string:";
       	cin>>c;
        cout<<endl;
       	push(c);
       	break;

       	case 2:
       	pop();
       	break;

       	default:
       	display();
        break;
       }
    }
	return 0;     
}