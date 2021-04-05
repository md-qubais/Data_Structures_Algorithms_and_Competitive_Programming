#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
struct Node{
int d;
struct Node*prev;
struct Node*next;
};
void display(struct Node*temp){
	if(temp==NULL){
		printf("List is empty nothing to display\n");
		return;
	}
	while(temp){
		printf("%d ",temp->d);
		temp=temp->next;
	}
	printf("\n");

}

struct Node* merge_list(struct Node*l1,struct Node*l2){
struct Node*temp=l1;
if(l1==NULL ){
printf("List l1 is NULL cannot merge the list\n");
return NULL;
}else if(l2==NULL){
printf("List l2 is NULL cannot merge the list\n");
return NULL;
}
while(temp->next){
	temp=temp->next;
}
temp->next=l2;
return l1;
}


void insert_list(struct Node** root ,int ele){
	struct Node*temp=*root;
	if(temp==NULL){
		(*root)=(struct Node*)malloc(sizeof(struct Node));
		//here we are dereferencing the pointer to 
		//pointer
		//becasuse first precedence goes to 
		//braces and then followed by arrow operator
		//and then followed by * operator
		//if we write simple like this
		//*(root)->d then it may leads to abnormal 
		//termination of the program
		(*root)->d=ele;
		(*root)->next=NULL;
        (*root)->prev=NULL;
	}else{
		struct Node*n=(struct Node*)malloc(sizeof(struct Node));
		n->d=ele;
		//or we can read scanf("%d",&n->d);
		n->prev=NULL;
		n->next=NULL;
		while(temp->next){
			temp=temp->next;
		}
		temp->next=n;
		temp=n;
	}
}





int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	struct Node*head1=NULL;
	struct Node*head2=NULL;
	for(int i=0;i<10;i++){
           insert_list(&head1,i+1);
           insert_list(&head2,(i+1)*2);
	}
	display(head1);
	display(head2);
	struct Node*temp=merge_list(head1,head2);
	display(temp);
	return 0;     
}