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

node* buildtree(int *pre,int *in,int s,int e){
	static int i=0;
	if(s>e){
         return NULL;
	}
	node*root=new node(pre[i]);
	int index=-1;
	for(int j=s;j<=e;j++){
             if(in[j]==pre[i]){
                   index=j;
             }
	}
	i++;
	root->left=buildtree(pre,in,s,index-1);
	root->right=buildtree(pre,in,index+1,e);
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

void printkthlevel(node*root,int k,vector<int> &v){
	if(root==NULL){
       return;
	}
	if(k==0){
       v.push_back(root->d);
       return;
	}
	printkthlevel(root->left,k-1,v);
	printkthlevel(root->right,k-1,v);
}


int print_target(node*root,int target,int k,vector<int> &v){
	if(root==NULL){
          return -1;
	}
    if(root->d==target){
   printkthlevel(root,k,v);
   return 0;
    }
    int dl=print_target(root->left,target,k,v);
    if(dl!=-1){
           if(dl+1==k){
                 v.push_back(root->d);
           }else{
              printkthlevel(root->right,k-2-dl,v);
           }
           return dl+1;
    }
    int dr=print_target(root->right,target,k,v);
    if(dr!=-1){
                if(dr+1==k){
                         v.push_back(root->d);
                          
                }else{
                	printkthlevel(root->left,k-2-dr,v);
                }
                return dr+1;
    }
return -1;
}




int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
    int num;
    cin>>num;
    int pre[num],in[num];
    for(int i=0;i<num;i++){
       cin>>pre[i];
    }
    for(int i=0;i<num;i++){
       cin>>in[i];
    }
    node*root=buildtree(pre,in,0,num-1);
    int t;
    cin>>t;
    while(t--){
    	int target,key;
    	cin>>target>>key;
    	vector<int> v;
    	print_target(root,target,key,v);
    	sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
             cout<<v[i]<<" ";
        }
        if(v.empty()) cout<<0;
        cout<<endl;
    }
	return 0;     
}