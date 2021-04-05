#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

void get_tree(Node*root,map<int,int> &m){
queue<pair<Node*,int>> q;
q.push(make_pair(root,0));
while(!q.empty()){
Node*temp=q.front().first;
int i=q.front().second;
q.pop();
if(m[i]==0){
m[i]=temp->data;
}
if(temp->left){
q.push(make_pair(temp->left,i-1));
}
if(temp->right){
q.push(make_pair(temp->right,i+1));
}
}


}


void topView(Node * root) {
map<int,int> m;
get_tree(root,m);
for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
cout<<it->second<<" ";
}
}

}; //End of Solution

int main() {
    #ifndef qubais_judge
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.topView(root);

    return 0;
}
