#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Node{
public:
	char ch;
	map<char,Node*> child;
	bool terminal;
	Node(char ch){
		this->ch=ch;
        terminal=false;
	}
};

class Trie{
public:
	Node*root;
	Trie(){
		root=new Node('\0');
	}
	void insert(string str){
		Node*temp=root;
		for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(temp->child.count(ch)==0){
             Node*n=new Node(ch);
             temp->child[ch]=n;
             temp=temp->child[ch];
            }else{
            	temp=temp->child[ch];
            }
		}
		temp->terminal=true;
	}

   void find_print(Node*temp,char *ch,string str,int i,int j){
              if(temp==NULL){
              	return;
              }
               if(j==str.length()){
                  if(temp->terminal==true){
                  	ch[i]='\0';
                  	cout<<ch<<endl;
                  	for(auto it:temp->child){
                               if(it.second!=NULL){
                                    ch[i]=it.first;
                               }
                  		find_print(it.second,ch,str,i+1,j);

                  	}

                  }else{
                  	       for(auto it:temp->child){
                                  ch[i]=it.first;
                              find_print(it.second,ch,str,i+1,j);
                  	       }
                  	 }
               }
               else if(temp->child.count(str[j])){
                  ch[i]=str[j];
                  find_print(temp->child[ch[i]],ch,str,i+1,j+1);
               }else{
               	cout<<"No suggestions"<<endl;
               	//this here was the problem
               	//that we have to insert the string
               	//into the trie that is not present
               	//in the given above data base
               	//or the dictionary
               	insert(str);
               	return;
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
	while(num--){
		string str;
		cin>>str;
        t.insert(str);
	}
	int n;
	cin>>n;
	while(n--){
	string str;
	cin>>str;
	char ch[100];
	t.find_print(t.root,ch,str,0,0);
	}
	return 0;     
}