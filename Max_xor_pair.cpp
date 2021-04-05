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
//helper function to find the max xor
	int max_xor_helper(int num){
		int res=0; 
		Node*temp=root;
		for(int i=31;i>0;i--){
			int bit=(num>>i)&1;
			if(bit==0){
				//find the complementery value 
				if(temp->right!=NULL){
                   temp=temp->right;
                   res+=(1<<i);//means that efficitive
                   //contriubution of that bit 
                   //if we find that bit is 1 to
                   //find max xor
				}else{
					temp=temp->left;
				}

			}else{
				if(temp->left!=NULL){
					temp=temp->left;
					res+=(1<<i);
				}else{
                     temp=temp->right;
				}
			}

		}
		//now returning the current
		//this is just returing the max-or
		return res;

	}
int max_xor(int *input,int num){
	int res=0;
	Trie t;
	for(int i=0;i<num;i++){
        int val=input[i];
        t.insert(val);
        res=max(res,t.max_xor_helper(val));
	}
	return res;
	}
};


int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	Trie t;
	int arr[]={3,10,5,25,2,8};
    cout<<t.max_xor(arr,sizeof(arr)/sizeof(int));
	return 0;     
}