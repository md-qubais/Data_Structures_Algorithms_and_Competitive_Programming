#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; 

int height(node *temp){
	if(temp==NULL){
		return -1;
	}
	return temp->ht;
}


node* right_right_rotation(node*root){
	node*b=root->right;
	node*t2=b->left;
	b->left=root;
	root->right=t2;
	root->ht=max(height(root->left),height(root->right))+1;
	b->ht=max(height(b->left),height(b->right))+1;
	return b;
}


node* left_left_rotation(node*root){
node*b=root->left;
node*temp=b->right;
b->right=root;
root->left=temp;
root->ht=max(height(root->left),height(root->right))+1;
b->ht=max(height(b->left),height(b->right))+1;
return b;
}





node * insert(node * root,int val)
{
	if(root==NULL){
		root=new node;
		root->val=val;
		root->left=root->right=NULL;
		root->ht=0;
		return root;
	}
	if(val<root->val){
		root->left=insert(root->left,val);

	}else{
           root->right=insert(root->right,val);
	}
	root->ht=max(height(root->left),height(root->right))+1;
	int bf=height(root->left)-height(root->right);
   if(bf<-1 and val>root->right->val){
   	root=right_right_rotation(root);


    return root;
   }
   else if(bf>1 and val<root->left->val){
   	root=left_left_rotation(root);
   return root;
   }
   else if(bf<-1 and val<root->right->val){
   	 node*temp1=root->right->left->right;
   	 node*temp=root->right;
   	 root->right=temp->left;
   	 root->right->right=temp;
     temp->left=temp1;
     temp->ht=max(height(temp->left),height(temp->right))+1;
     root->right->ht=max(height(root->right->left),height(root->right->right))+1;
   	 root=right_right_rotation(root);
     return root;
   }else if(bf>1  and val>root->left->val){
    node*temp=root->left->right;
    node*temp1=root->left;
    temp1->right=temp->left;
    root->left=temp;
    root->left->left=temp1;
    temp1->ht=max(height(temp1->left),height(temp1->right))+1;
    temp->ht=max(height(temp->left),height(temp->right))+1;
    root=left_left_rotation(root);
   	return root;
   }
  return root;
}

 
void iterative_level_order_new_line(node*root){
queue<node*> q;
q.push(root);
q.push(NULL);

while(!q.empty()){
	node*f=q.front();
	q.pop();
	if(f==NULL && q.front()==NULL){
	break;
	}
	if(f){
		cout<<f->val<<" ";
	if(f->left){
	 q.push(f->left);
	}
	if(f->right){
		q.push(f->right);
	}
	}else{
	cout<<endl;
	q.push(NULL);
	}
}
}

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	node*root=NULL;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		root=insert(root,num);
	}
	iterative_level_order_new_line(root);
	return 0;   
}