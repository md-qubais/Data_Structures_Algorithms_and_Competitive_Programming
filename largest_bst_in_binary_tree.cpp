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

node* buildtree(int *in,int *pre,int s,int e){
	static int i=0;
    if(s>e){
      return NULL;
    }
   node*root=new node(pre[i]);
   int index=-1;
   for(int j=s;j<=e;j++){
         if(pre[i]==in[j]){
         	index=j;
         	break;
         }
   }
   i++;
   root->left=buildtree(in,pre,s,index-1);
   root->right=buildtree(in,pre,index+1,e);
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

class Pair{
public:
	int height;
	int size;
	bool rate;
};

int size(node*root){
	static int sum=0;
	if(root==NULL){

       return 0;
	}
	size(root->left);
	sum++;
	size(root->right);
	return sum;
}


Pair get_BST(node*root,int Min,int Max){
	Pair p;
	if(root==NULL){
     p.height=0;
     p.rate=true;
     p.size=0;
     return p;
	}
	Pair left=get_BST(root->left,Min,root->d);
	Pair right=get_BST(root->right,root->d,Max);
	if(root->d>=Min and root->d<=Max and left.rate and right.rate){
     p.height=max(left.height,right.height)+1;
     p.rate=true;
     p.size=size(root);
     return p;
	}
	p.height=max(left.height,right.height);
    p.size=max(left.size,right.size);
    p.rate=false;
return p;
}



int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int pre[num];
	int in[num];
	for(int i=0;i<num;i++){
         cin>>pre[i];
	}
    for(int i=0;i<num;i++){
         cin>>in[i];
    }
    node*root=buildtree(in,pre,0,num-1);
    Pair p=get_BST(root,INT_MIN,INT_MAX);
    cout<<p.size<<endl;
   //9
//50 30 5 20 60 45 70 65 80
//5 30 20 50 45 60 65 70 80
    return 0;     
}