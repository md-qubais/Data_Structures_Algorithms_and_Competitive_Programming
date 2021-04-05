#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class node{
public:
  int d;
  node*right,*left;
  node(int d){
    this->d=d;
    right=left=NULL;
  }
};

node* build_level_order_tree(){
queue<node*> q;
int num;
cin>>num;
node*root=new node(num);
q.push(root);
while(!q.empty()){
node*temp=q.front();
q.pop();
cin>>num;
if(num!=-1){
node*f=new node(num);
temp->left=f;
q.push(f);
}
cin>>num;
if(num!=-1){
  node*f=new node(num);
  temp->right=f;
  q.push(f);
}
}
return root;
}


void iterative_level_order(node*root,map<int,vector<int>> &m){
  queue<pair<node*,int>> q;
  q.push(make_pair(root,0));
  m[0].push_back(root->d);
  while(!q.empty()){
         if(q.front().first->left!=NULL){
                q.push(make_pair(q.front().first->left,(q.front().second)-1));
                m[q.front().second-1].push_back(q.front().first->left->d);
         }
         if(q.front().first->right!=NULL){
          q.push(make_pair(q.front().first->right,(q.front().second)+1));
            m[q.front().second+1].push_back(q.front().first->right->d);
         }
         q.pop();

          }
}



int32_t main(){
  #ifndef qubais_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  IOS;
  int level;
  cin>>level;
  node*root=build_level_order_tree();
  map<int,vector<int>> m;
  iterative_level_order(root,m); 
  for(auto it:m){
    for(auto i:it.second){
      cout<<i<<" ";
    }
    cout<<endl;
  }
  }