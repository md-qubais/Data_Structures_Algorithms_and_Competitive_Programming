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

node* buildtree(){
int num;
cin>>num;
node*root=new node(num);
int child;
cin>>child;
if(child==2){
root->left=buildtree();
root->right=buildtree();
}
else if(child==1){
root->left=buildtree();
root->right=NULL;
}else{
	root->left=root->right=NULL;
}
return root;
}

int sum=0;
void sum_at_level(node*root,int k){
if(k==0){

sum=sum+root->d;
return;
}
sum_at_level(root->left,k-1);
sum_at_level(root->right,k-1);
}

int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
    node*root=buildtree();
    int k;
    cin>>k;
    sum_at_level(root,k);
    cout<<sum<<endl;
	return 0;     
}