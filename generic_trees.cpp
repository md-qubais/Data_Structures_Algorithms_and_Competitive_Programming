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
	vector<Node*> nodes;
	Node(){
	}
	Node(int data){
		this->data=data;
	}
};

Node* create_tree(Node*root,vector<int>&arr,int i){
	stack<Node*> st;
	root=new Node();
	root->data=arr[i];
	st.push(root);
	for(int i=1;i<arr.size();i++){
		if(arr[i]==-1){
			if(!st.empty()){
				st.pop();
			}
		}else{
			Node*temp=new Node(arr[i]);
			Node*n=st.top();
			n->nodes.push_back(temp);
			st.push(temp);
		}
	}
	return root;
}

void display(Node*root){
	cout<<root->data<<endl;
	for(auto it:root->nodes){
		display(it);
	}
}

int count_nodes(Node*root){
	int ans=1;
	for(auto it:root->nodes){
		ans+=count_nodes(it);
	}
	return ans;
}

int maximum(Node*root){
	int ans=root->data;
	for(auto it:root->nodes){
		ans=max(ans,maximum(it));
	}
	return ans;
}

int height(Node*root){
	int ans=0;
	for(auto it:root->nodes){
		ans=max(ans,height(it));
	}
	return ans+1;
}

void post_and_pre(Node*root){
	cout<<"Node Pre "<<root->data<<endl;
	for(auto it:root->nodes){
		cout<<"Edge Pre "<<root->data<<"--"<<it->data<<endl;
		post_and_pre(it);
		cout<<"Edge Post "<<root->data<<"--"<<it->data<<endl;
	}
	cout<<"Node Post "<<root->data<<endl;
}

/*

class Solution {
public:
	vector<vector<int>> ans;
    vector<vector<int>> levelOrder(Node* root){
    	if(root==NULL){
            return ans;
        }
        deque<Node*> q;
    	vector<int> temp;
    	q.push_back(root);
    	q.push_back(NULL);
    	while(!q.empty()){
    		Node*n=q.front();
    		q.pop_front();
    		if(n==NULL){
    			if(temp.size()>0) ans.push_back(temp);
    			temp.erase(temp.begin(),temp.end());
    			q.push_back(NULL);
    		}else{
    			temp.push_back(n->val);
    			for(auto it:n->children){
    				q.push_back(it);
    			}
    		}
    		if(q.size()==1 and q.front()==NULL){
    			if(temp.size()>0) ans.push_back(temp);
    			return ans;
    		}
    	}
    	return ans;
    }
};
*/

/*
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(TreeNode* root){
        if(root==NULL){
            return ans;
        }
        deque<TreeNode*> q;
        vector<int> temp;
        q.push_back(root);
        q.push_back(NULL);
        while(!q.empty()){
            TreeNode*n=q.front();
            q.pop_front();
            if(n==NULL){
                if(temp.size()>0) ans.push_back(temp);
                temp.erase(temp.begin(),temp.end());
                if(q.size()>0) q.push_back(NULL);
                else{
                    if(temp.size()>0) ans.push_back(temp); 
                }

            }else{
                temp.push_back(n->val);
                if(n->left){
                    q.push_back(n->left);
                }
                if(n->right) q.push_back(n->right);
            }
        }
        return ans;
    }
};
*/





void level_order(Node*root){
	deque<Node*> q;
	q.push_back(root);
	while(!q.empty()){
		Node*temp=q.front();
		q.pop_front();
		cout<<temp->data<<" ";
		for(auto it:temp->nodes){
			q.push_back(it);
		}
	}
	cout<<"."<<endl;
}

void level_order_new_line(Node*root){
	deque<pair<Node*,int>> q;
	q.push_back(make_pair(root,0));
	int prev=0;
	while(!q.empty()){
		Node*temp=q.front().first;
		int curr=q.front().second;
		q.pop_front();
		for(auto it:temp->nodes){
			q.push_back(make_pair(it,curr+1));
		}
		if(prev==curr){
			cout<<temp->data<<" ";
		}else{
			cout<<endl;
			prev++;
			cout<<temp->data<<" ";
		}
	}
}


//we can also do this below question by using
//2 stacks then it will be much more optimized
//and can be done in O(n) rather than
//using the arrays and queues with arrays
//think and do that with stacks
//by using the property of even and odd of levels
//add left to right and right to left on the basis
//of even and odd property
void level_order_zig_zag(Node*root){
    deque<pair<Node*,int>> q;
	q.push_back(make_pair(root,0));
	int prev=0;
	vector<int> arr;
	while(!q.empty()){
		Node*temp=q.front().first;
		int curr=q.front().second;
		q.pop_front();
		for(auto it:temp->nodes){
			q.push_back(make_pair(it,curr+1));
		}
		if(prev==curr){
			arr.push_back(temp->data);
		}else{
			if(prev%2==0){
				for(auto it:arr){
					cout<<it<<" ";
				}
				arr.erase(arr.begin(),arr.end());
			}else{
				for(int i=arr.size()-1;i>=0;i--){
					cout<<arr[i]<<" ";
				}
				arr.erase(arr.begin(),arr.end());
			}
			cout<<endl;
			arr.push_back(temp->data);
			prev++;
		}
	}	
	if(prev%2==0){
		for(auto it:arr){
			cout<<it<<" ";
		}
	}else{
		for(int i=arr.size()-1;i>=0;i--){
			cout<<arr[i]<<" ";
		}
	}
}

void display_mirror(Node*root){
	cout<<root->data<<" -> ";
	for(auto it:root->nodes){
		cout<<it->data<<", ";
	}
	cout<<"."<<endl;
	for(auto it:root->nodes){
		display_mirror(it);
	}
}

void mirror(Node*root){
	reverse(root->nodes.begin(),root->nodes.end());
	for(auto it:root->nodes){
		mirror(it);
	}
}


//the removes leaves can be only applied
//with the help of preorder
//if we tend to use post order then
//it will remove all the nodes from
//the tree and then it will return error
//once dry run the preorder and the post order
//you will get the difference that post order 
//will remove the entire tree and return null
void remove_leaves(Node*root){
	vector<Node*> arr;
	for(auto it:root->nodes){
		if(it->nodes.size()>0){
			arr.push_back(it);
		}
	}
	root->nodes.erase(root->nodes.begin(),root->nodes.end());
	for(auto it:arr){
		root->nodes.push_back(it);
	}
	for(auto it:root->nodes){
		remove_leaves(it);
	}
}

bool find(Node*root,int k){
	if(root->data==k){
		return true;
	}
	for(auto it:root->nodes){
		if(find(it,k)){
			return true;
		}
	}
	return false;
}

vector<int> node_to_root_path(Node*root,int k){
	if(root->data==k){
		vector<int> arr;
		arr.push_back(root->data);
		return arr;
	}
	vector<int> ans;
	for(auto it:root->nodes){
		ans=node_to_root_path(it,k);
		if(ans.size()>0){
			ans.push_back(root->data);
			return ans;
		}
	}
	return ans;
}

int32_t main(){
	qubais_judge;
	IOS; 
	Node* root=NULL;
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<arr.size();i++){
		cin>>arr[i];
	}
	root=create_tree(root,arr,0);
	//display(root);
	//cout<<count_nodes(root);
	//cout<<maximum(root);
	//cout<<height(root)-1;
	//post_and_pre(root);
	//level_order(root);
	//level_order_new_line(root);
	//level_order_zig_zag(root);
	//display_mirror(root);
	//mirror(root);
	//remove_leaves(root);
	//display_mirror(root);
	int k;
	cin>>k;
	vector<int> ans=node_to_root_path(root,k);
	if(ans.size()==0){
		cout<<"[]"<<endl;
	}else if(ans.size()==1){
		cout<<"["<<ans[0]<<"]"<<endl;
	}else{
		cout<<"[";
		for(int i=0;i<ans.size()-1;i++){
			cout<<ans[i]<<", ";
		}
		cout<<ans[ans.size()-1]<<"]";
	}
	return 0;
}