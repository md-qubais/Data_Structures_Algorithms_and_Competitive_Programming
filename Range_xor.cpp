#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Node{
public:
	Node*left;//this node contains the data 0
	Node*right;//this node contains the data 1
};
class Trie{
public:
	Node*root;
	Trie(){
     root=new Node();
	}
	//let us say that the integer is 32 bit number
	void insert(int num){
		Node*temp=root;
		for(int i=31;i>=0;i--){
			int bit=(num>>i)&1;
			if(bit==0){
				//if the bit is zero go to the left node
                    if(temp->left==NULL){
                    	temp->left=new Node();
                    	 }
                    	 temp=temp->left;
			}else{
				//if the bit is one go to the right node
                          if(temp->right==NULL){
                          	temp->right=new Node();
                          }
                          temp=temp->right;
			}

		}

	}
	
};


int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	Trie t;
	int num;
	cin>>num;
	vector<int> v;
	for(int i=0;i<num;i++){
           int choice;
           cin>>choice;
           if(choice==0){
           	int n;
           	cin>>n;
           v.push_back(n);
           t.insert(n);
           }else{
           	int l,r,x;
           	cin>>l>>r>>x;
           	int Max=*max_element(v.begin()+(l-1),v.begin()+r);
           	cout<<Max<<endl;
           }
	}
	return 0;     
}