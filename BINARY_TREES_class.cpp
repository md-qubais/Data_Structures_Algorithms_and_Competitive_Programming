#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define fori(n) for(int i=0;i<n;i++)
#define ford(n) for(int i=n-1;i>=0;i--)
#define fl(x,n) for(int i=x;i<n;i++)
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Node{
public:
	int data;
	Node*left;
	Node*right;
	Node(){

	}
	Node(int data,Node*left=NULL,Node*right=NULL){
		this->data=data;
		this->left=left;
		this->right=right;
	}
};

Node* buildtree(Node*root){
	int n;
	cin>>n;
	if(n==-1){
		return NULL;
	}
	root=new Node(n);
	root->left=buildtree(root->left);
	root->right=buildtree(root->right);
	return root;
}

Node* Buildtree(){
	int n;
	cin>>n;
	if(n==-1){
		return NULL;
	}
	Node*root=new Node(n);
	root->left=Buildtree();
	root->right=Buildtree();
	return root;
}


void preorder(Node*root){
	if(root){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(Node*root){
	if(root){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}

void inorder(Node*root){
	if(root){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int count_nodes(Node*root){
	if(root==NULL){
		return 0;
	}
	return 1+count_nodes(root->left)+count_nodes(root->right);
} 


//for height every call will take o(n) timme
int height(Node*root){
	if(root==NULL){
		return 0;
	}
	return 1+max(height(root->left),height(root->right));
}

//this is diameter function and its time compelx is O(n^2)
int diameter(Node*root){
	if(root==NULL){
		return 0;
	}
	int op1=diameter(root->left);
	int op2=diameter(root->right);
	int op3=height(root->left)+height(root->right);
	return max(op1,max(op2,op3));
}

//this is diameter optimized function
//using pair function
int diameter_optimized(){
	return 0;
}


int sum(Node*root){
	if(root==NULL){
		return 0;
	}
	return sum(root->left)+sum(root->right)+root->data;
}

void mirror_qubais(Node*root){
	if(root==NULL){
		return;
	}
	mirror_qubais(root->left);
	mirror_qubais(root->right);
	swap(root->left,root->right);
}

void mirror(Node*root){
	if(root==NULL){
		return;
	}
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}



int32_t main(){
	qubais_judge;
	IOS; 
	Node*root=NULL;
	root=Buildtree();
	preorder(root);
	cout<<endl;
	/*
	postorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	cout<<count_nodes(root)<<endl;
	cout<<height(root)<<endl;
	cout<<diameter(root)<<endl;
	*/
	cout<<sum(root)<<endl;
	//mirror_qubais(root);
	mirror(root);
	cout<<endl;
	preorder(root);
	return 0;
}