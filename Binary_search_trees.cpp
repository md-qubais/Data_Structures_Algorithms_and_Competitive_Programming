#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class node{
public:
	int d;
	node*left,*right;
	node(int d){
		this->d=d;
		left=right=NULL;

	}
};

node* insertBst(node*root,int d){
	if(root==NULL){
       return new node(d);
	}
	if(root->d>d){
       root->left=insertBst(root->left,d);
	}else{
		root->right=insertBst(root->right,d);
	}
return root;

}


node* buildBst(){
	node*root=NULL;
	int d;
	cin>>d;
	while(d!=-1){
      root=insertBst(root,d);
      cin>>d;
	}
	return root;
}


//where in bst the inorder traversal 
//always gives the output in sorted order
void inorder(node*root){
if(root==NULL){
return;
}
inorder(root->left);
cout<<root->d<<" ";
inorder(root->right);
}

//below is the code for search in the BST
bool search(node*root,int key){
	if(root==NULL){
            return false;
	}
	if(root->d==key){
           return true;
	}
    if(key>root->d){
      return search(root->right,key);
    }
  return search(root->left,key);
}

//here below is the code for the deletion of the
//data from the BST
node* deletion(node*root,int key){
	if(root==NULL){
       return NULL;
	}
	if(root->d>key){
     root->left= deletion(root->left,key);
         return root;
	}else if(root->d<key){
	 root->right=deletion(root->right,key);
		  return root;
	}
	if(root->d==key){
      //case 1 : the deleting node 
		//not contains any child node
              if(root->left==NULL and root->right==NULL){
                 return NULL;
              }
      //case 2:if the deleting node contains only
              //one child either left or right child
              if(root->right==NULL and root->left){
                      return root->left;
              }
              if(root->left==NULL and root->right){
                      return root->right;
              }
      //now here comes the challenging one
      //deletion of the node which has two childs
              if(root->left and root->right){
                         node*temp=root->right;
                         while(temp->left!=NULL){
                               temp=temp->left;
                         }
                         root->d=temp->d;
                         root->right=deletion(root->right,root->d);
                 return root;
              }

	}
return root;
}


//below is the program for creating the
//linked list using using the tree
class Linkedlist{
public:
	node*head,*tail;
};

Linkedlist Create_list(node*root){
	Linkedlist l;
	//case 1 if its a leaf node;
if(root->right==NULL and root->left==NULL){
l.head=root;
l.tail=root;
return l;
}
 //case 2 if contains only left or right subtree
if(root->left and root->right==NULL){
Linkedlist left=Create_list(root->left);
left.tail->right=root;
l.head=left.head;
l.tail=root;
return l;
}

if(root->right and root->left==NULL){
Linkedlist right=Create_list(root->right);
root->right=right.head;
l.head=root;
l.tail=right.tail;
return l;
}
//now here is the case where there are
//both left and the right subtree are present

Linkedlist left=Create_list(root->left);
Linkedlist right=Create_list(root->right);
left.tail->right=root;
root->right=right.head;
l.head=left.head;
l.tail=right.tail;
return l;
}



int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
    node*root=buildBst();
    inorder(root);
    Linkedlist l;
    l=Create_list(root);
    cout<<endl;
    while(l.head->right){
             cout<<l.head->d<<endl;
             l.head=l.head->right;
    }
  	return 0;     
}