#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Node{
public:
	char ch;
	int freq;
	unordered_map<char,Node*> child;
	Node(char ch){
		this->ch=ch;
		this->freq=1;
	}
};

class Trie{
public:
	Node*root;
	Trie(){
     root=new Node('\0');
	}
	void insert(char *ch){
      Node*temp=root;
      		for(int i=0;ch[i];i++){
              if(temp->child.count(ch[i])==0){
             Node*n=new Node(ch[i]);
              temp->child[ch[i]]=n;
              temp=n;
              }
              else{
              	temp=temp->child[ch[i]];
              	temp->freq++;
              }
      		}
	}
	void find_prefix(char *ch){
		Node*temp=root;
		string str="";
		for(int i=0;ch[i];i++){
                  if(temp->child.count(ch[i])==0){
                      cout<<-1<<endl;
                      return ;
                  }
                  temp=temp->child[ch[i]];
                  str=str+temp->ch;
                  if(temp->freq==1){
                      cout<<str<<endl;
                      return;
                  }
       }
                if(temp->freq==1){
                	cout<<str<<endl;
                	return;
                }else{
                	cout<<-1<<endl;
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
	char words[][100]={"cobra","dog","dove","duck"};
	for(int i=0;i<4;i++){
        t.insert(words[i]);
	}
	for(int i=0;i<4;i++){
	t.find_prefix(words[i]);
	}
	return 0;     
}