#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Node{
public:
	char ch;
	unordered_map<char,Node*> child;
	bool terminal;
	Node(char ch){
		this->ch=ch;
		terminal=false;
	}
};
class Trie{
Node* root;
public:
Trie(){
	root=new Node('\0');//initializing with the value null
}
void insert(char *ch){
	Node*temp=root;
	for(int i=0;ch[i];i++){
		if(temp->child.count(ch[i])==0){
			Node*n=new Node(ch[i]);
			temp->child[ch[i]]=n;
            temp=n;
		}else{
			temp=temp->child[ch[i]];
		}
	}
	temp->terminal=true;

}

bool search(char *ch){
	Node*temp=root;
	for(int i=0;ch[i];i++){
            if(temp->child.count(ch[i])==0){
               return false;      
            } 
            temp=temp->child[ch[i]];
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
	char ch[][100]={"qubais","imad","raqeeb"};
	for(int i=0;i<3;i++){
      t.insert(ch[i]);
	}
	char c[100];
	cin>>c;
    cout<<t.search(c)<<endl;
	return 0;     
}