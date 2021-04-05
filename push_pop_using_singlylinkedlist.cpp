#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
struct Node{
int d;
struct Node*next;
};
struct Node*root=NULL;

void push(int num){
	struct Node*temp=root;
	if(root==NULL){ 
		root=(struct Node*)malloc(sizeof(struct Node));
        root->d=num;
        root->next=NULL;
    }else{
    	struct Node*n;
    	while(temp->next!=NULL){
          temp=temp->next;
    	}
    	n=(struct Node*)malloc(sizeof(struct Node));
    	n->d=num;
    	n->next=NULL;
        temp->next=n;
    }	
}

void pop(){
	struct Node*temp=root;
if(root==NULL){
printf("Cannot pop element the stack is empty\n");
return;
}
if(temp->next==NULL){
    printf("%d is popped out\n",root->d);
		root=NULL;
		return;
	}else{
	struct Node*temp=root;
	struct Node*n=NULL;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	n=temp->next;
	temp->next=NULL;
	free(n);
   
}
}

void display(struct Node*temp){
	if(temp==NULL){
		return;
	}
	display(temp->next);
	printf("%d ",temp->d);
}

void display_stack(){
if(root==NULL){
printf("Elements are empty cannot display\n");
}else{
	printf("Below are the stack Elements\n");
	display(root);
}
printf("\n");
}


int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	//scanf("%d",&num);
	for(int i=0;i<num;i++){
             int n;
             //scanf("%d",&n);
             cin>>n;
             push(n);
	}
	display_stack();
	pop();
	display_stack();
	pop();
	display_stack();
	pop();
	display_stack();
	pop();
	return 0;     
}