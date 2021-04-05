#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
#define SIZE 5
using namespace std;
//declaring the stack and the top val globally
//and can use them in every function
int stack[5];
int top=-1;
int peek();
int isFull();
int isEmpty();
void push(int);
void pop();
void print();
int32_t main() 
{
  #ifndef qubais_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  IOS;
  while(1){
  printf("Enter the choice\n");
  printf("Enter 1 to push element in the stack\n");
  printf("Enter 2 to pop element from the stack\n");
  printf("Enter 3 to get the top most element from the stack\n");
  printf("Enter 4 to print the element of the stack\n");
  printf("Enter 5 to Exit\n");
  int ch;
  cin>>ch;
  //scanf("%d",&ch);
  if(ch>5 and ch<1){
  printf("Invalid choice\n");
  printf("Please Enter valid choice\n");
  }else{
    switch(ch){
    case 1:
    int ele;
    printf("Enter the element to be inserted in the stack:\n");
    cin>>ele;
    //scanf("%d",&ele);
    push(ele);
    break;
    case 2:
    pop();
    break;
    case 3:
    printf("%d\n",peek());
    break;
    case 4:
    print();
    break;
    default:
    exit(0);
  }
}
  }
  return 0;     
}

int isFull(){
  if(top==SIZE-1){
        return 1;
  }else{
    return 0;
  }
}

int isEmpty(){
  if(top==-1){
 return 1;
  }else{
    return 0;
  }
}

void push(int ele){
if(isFull()){
printf("Stack overflow cant insert element into the stack");
}else{
stack[++top]=ele;
}
}

void pop(){
if(isEmpty()){
  printf("Stack is empty cant delete any element");
}else{
  top--;
}
}

int peek(){
  if(isEmpty()){
  printf("Stack is empty nothing to display");
  return -1;
  }
  return stack[top];
} 

void print(){
int i=top;
if(isEmpty()){
printf("stack is empty nothing to display");
return ;
}
  for(;i>=0;i--){
  printf("%d ",stack[i]);
  }
  printf("\n");
}