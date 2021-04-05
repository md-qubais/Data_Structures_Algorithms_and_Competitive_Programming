#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class node{
public:
	int d;
	node* left;
	node* right;
	node(int d){
	 this->d=d;
	 left=right=NULL;
	}
};
node* buildtree(){
	int d;
	cin>>d;
	if(d==-1){
    return NULL;
	}
	node *root=new node(d);
	cout<<"Enter the left child of:"<<root->d<<endl;
	root->left=buildtree();
	cout<<"Enter the right child of:"<<root->d<<endl;
	root->right=buildtree();
 return root;	
}
void preorder(node*root){
	if(root==NULL){
       return ;
	}
	cout<<root->d<<endl;
	preorder(root->left);
	preorder(root->right);

}

int height(node*root){
if(root==NULL){
return 0;
}
int left=height(root->left)+1;
int right=height(root->right)+1;
return (max(left,right)+1);
}

void printkthlevel(node*root,int k){
	if(root==NULL){
       return;
	}
	if(k==1){
       cout<<root->d<<" ";
       return;
	}
	printkthlevel(root->left,k-1);
	printkthlevel(root->right,k-1);

}

//here it is known as level_order traversal
//by using recusrion
void level_order(node*root){
	int h=height(root);
     for(int i=1;i<=h;i++){
     printkthlevel(root,i);
	 cout<<endl;    
  	}
}

//here below is the code for the 
//post order traversal using recursion
void post_order(node*root){
	if(root==NULL){
	       return;
	}
	post_order(root->left);
	post_order(root->right);
	cout<<root->d<<" ";
}


void iterative_level_order(node*root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
         cout<<q.front()->d<<" ";
         if(q.front()->left!=NULL){
                q.push(q.front()->left);
         }
         if(q.front()->right!=NULL){
         	q.push(q.front()->right);
         }
         q.pop();
         	}
}


//here below is the code for the
//iterative level_order_traveral of binary tree
//BFS breadth first search 
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
		cout<<f->d<<" ";
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


void iterative_level_order_new_line_2(node*root){
	queue<pair<node*,int> > q;
	q.push(make_pair(root,0));
	while(!q.empty()){
		node*f=q.front().first;
		int i=q.front().second;
	    q.pop();
		if(f->left){
			q.push(make_pair(f->left,i+1));
		}
		if(f->right	){
		q.push(make_pair(f->right,i+1));
		}
		
		if(q.empty() || q.front().second==i){
		 cout<<f->d<<" ";
		}
		else if(!q.empty() && q.front().second!=i){
			cout<<f->d<<" ";
			cout<<endl;
		}
	
	}
}

//below is the program for the total number of nodes
int no_of_nodes(node*root){
	if(root==NULL){
	 return 0;
	}
	int left=no_of_nodes(root->left);
	int right=no_of_nodes(root->right);
	return left+right+1;

}

//below is the code for the sum of all the nodes
int sum_of_nodes(node*root){
	if(root==NULL){
	return 0;
	}
   int sum=root->d+sum_of_nodes(root->left)+sum_of_nodes(root->right);
   return sum;
}

//here below is the code for the diameter of the tree
/*int diameter(node*root){
	if(root==NULL){
         return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);
	int op1=h1+h2;
	int op2=diameter(root->left);
	int op3=diameter(root->right);
return max(op1,op2,op3);
}

//here below is the program for the diameter for
//optimized 
//using bottom up approach
/*class Pair{
public:
	int height;
	int diameter;
};
Pair diameter_optimized(node*root){
Pair p;
if(root==NULL){
	p.height=p.diameter=0;
return p;
}
Pair left=diameter_optimized(root->left);
Pair right=diameter_optimized(root->right);
p.height=height(left.height)+height(right.height)+1;
p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));
return p;
}


//below is the code for 
//replacing the node by the sum of its descendants
int replace_sum(node*root){
	if(root==NULL){
	 return 0;
	}
	int s1=replace_sum(root->left);
	int s2=replace_sum(root->right);
	if(s1==0 && s2==0){
	 return root->d; 
	}
	int temp=root->d;
	root->d=s1+s2;
	return temp+root->d;
}


//below is the code to find if the tree
//is height balanced tree or not 
/*class Pair{
public:
 int height;
 bool rate;
};

Pair isBalanced(node*root){
	Pair p;
		if(root==NULL){
		p.height=0;
		p.rate=true;
		return p;
	}
	Pair left=isBalanced(root->left);
	Pair right=isBalanced(root->right);
	int ans=left.height-right.height;
	if(ans<0){
	 ans=-ans;
	}
	
 	if(ans<=1 && left.rate && left.rate){
     p.height=max(left.height,right.height)+1;
	 p.rate=true;	 
	 }else{
	 p.height=max(left.height,right.height)+1;
	 p.rate=false;	 
	 }
     return p;
}

*/
//here we are building the binary tree from array

node* buildfromarray(int *arr,int s,int e){
if(s>e){
return NULL;
}
int mid=(s+e)/2;
node*root=new node(arr[mid]);
root->left=buildfromarray(arr,s,mid-1);
root->right=buildfromarray(arr,mid+1,e);
return root;
}

//here we are buiding the binary tree from 
//preorder and inorder traversals

int i=0;
node* create_pre(int *ino,int *pre,int s,int e){
	if(s>e){
	 return NULL;
	}
	node*root=new node(pre[i]);
	int index=-1;
	for(int j=s;j<=e;j++){
	      if(ino[j]==pre[i]){
	             index=j;
				 break;
		  }
	}
	i++;
	root->left=create_pre(ino,pre,s,index-1);
	root->right=create_pre(ino,pre,index+1,e);
    return root;	
}

//here below we are building the binary tree using 
//the postorder and inorder traversals

node* create_post(int *ino,int *post,int s,int e){
			static int i=e;
				if(s>e){
		return NULL;
	}
	
	node*root=new node(post[i]);
	int index=-1;
	for(int j=s;j<=e;j++){
		if(ino[j]==post[i]){
			index=j;
			break;
		}
	}
	i--;
	cout<<"qubais";
	root->right=create_post(ino,post,index+1,e);
	root->left=create_post(ino,post,s,index-1);
return root;
}

//here below is the qubais algorithm for the 
//right view of the binary tree
void printRightView(node*root,int level){
	static int max=-1;
	if(root==NULL){
	 return;
	}
	if(level>max){
	 cout<<root->d<<" ";
	 max=level;
	}
	printRightView(root->right,level+1);
	printRightView(root->left,level+1);
}

//below is the code for the iterative right view 
//of the binary tree
void rightview(node*root){
	queue<pair<node*,int> > q;
	q.push(make_pair(root,0));
	while(!q.empty()){
	     node*temp=q.front().first;
	     int i=q.front().second;
	     q.pop();
	     if(temp->left){
	      q.push(make_pair(temp->left,i+1));
		 }
		 if(temp->right){
		  q.push(make_pair(temp->right,i+1));
		 }
	     if(q.empty() || q.front().second!=i){
	              cout<<temp->d<<" ";
		 }
	}

}




//below are the two function and their code 
//for printing the k node from the target node
/*
void printkthlevel(node*root,int k){
	if(root==NULL){
       return;
	}
	if(k==0){
       cout<<root->d<<" ";
       return;
	}
	printkthlevel(root->left,k-1);
	printkthlevel(root->right,k-1);
}

int print_node_distance_k(node*root,node*target,int k){
	if(root==NULL){
	 return -1;
	}
	if(root==target){
		printkthlevel(target,k);
	  return 0;
	}
	int dl=print_node_distance_k(root->left,target,k);
	
	if(dl!=-1){
	if(dl+1==k){
	cout<<root->d<<" ";
	}else{
	printkthlevel(root->right,k-2-dl);
	}
	return dl+1;
	}
	
	int dr=print_node_distance_k(root->right,target,k);
          
		  if(dr!=-1){
		  if(dr+1==k){
		  	cout<<root->d<<" ";
		  }else{
		    printkthlevel(root->left,k-2-dr);
		  }
		  return dr+1;
		  }
		  
    return -1;

}*/

//Lowest Common Ancestor
node* LCA(node*root,int a,int b){
if(root==NULL){
return NULL;
}
if(root->d==a || root->d==b){
	return root;
}

node*left=LCA(root->left,a,b);
node*right=LCA(root->right,a,b);

if(right!=NULL && left!=NULL){
return root;
}
if(left!=NULL){
	return left;
}
return right;
}

//maximum sum path from any node to any node


void inorder(node*root){
	if(root==NULL){
      return ;
	}
	inorder(root->left);
	cout<<root->d<<" ";
	inorder(root->right);

}



int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif	
	pair<string,int> p1=make_pair("A",100);
	pair<string,int> p2=make_pair("A",1);
	pair<string,int> p3=ake_pair("B",0);
	multiset< pair<string,int> > m;
	m.insert(p1);
	m.insert(p3);
	m.insert(p2);
	for(auto it:m){
		cout<<it.first<<" "<<it.second<<endl;

	}
	return 0;     
}