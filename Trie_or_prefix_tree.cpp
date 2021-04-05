#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Node{
public:
	char ch;
	unordered_map<char,Node*> children;
	bool terminal;
	Node(char ch){
		this->ch=ch;
		terminal=false;
	}
};
class Trie{
	Node *root;
public:
	Trie(){
		root=new Node('\0');
	}
void insert(char *ch){
	Node*temp=root;
	for(int i=0;ch[i];i++){
		char w=ch[i];
		if(temp->children.count(w)){
            temp=temp->children[w];
		}
		else{
			Node*n=new Node(w);
			temp->children[w]=n;
			temp=n;
		}
	}
       temp->terminal=true;
	}
	bool find(char *ch){
		Node*temp=root;
		for(int i=0;ch[i];i++){
			if(temp->children.count(ch[i])==0){
            return false;
			}
			temp=temp->children[ch[i]];
			cout<<temp->ch;

		}
return temp->terminal;
	}
};
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	Trie t;
	char ch[][100]={"qubais","uddin","imad","mohammed"};
	for(int i=0;i<5;i++){
          t.insert(ch[i]);
	}
	char c[100];
	cin>>c;
	cout<<t.find(c);
	return 0;     
}