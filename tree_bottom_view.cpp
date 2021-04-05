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

void tree_bottom_view(node*root,map<int,int> &m){
  queue< pair<node*,int> > q;
  q.push(make_pair(root,0));
  while(!q.empty()){
      node*temp=q.front().first;
      int i=q.front().second;
      q.pop();
      if(temp->left){
         q.push(make_pair(temp->left,i-1));
      }
      if(temp->right){
        q.push(make_pair(temp->right,i+1));
      }
      m[i]=temp->d;
  }
}




int32_t main(){
  #ifndef qubais_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  IOS;
  node*root=build_level_order_tree();
  map<int,int> m;
  tree_bottom_view(root,m);
  for(auto it:m){
   cout<<it.second<<" ";
  }
  }