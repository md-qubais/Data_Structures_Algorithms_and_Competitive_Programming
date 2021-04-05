
#include<climits>
#include<bits/stdc++.h>
	struct Node {
		int data;
		Node* left;
		Node* right;
	};

   bool check(Node* root,int Min,int Max){
   if(root==NULL){
       return true;
   }
       if(root->data>Min and root->data<Max and check(root->left,min,root->data) and check(root->right,root->data,Max)){
           return true;

       }
       return false;
}

	bool checkBST(Node* root){
        bool b=check(root,INT_MIN,INT_MAX);
        return b;
	}
int main(){
  return 0;
}