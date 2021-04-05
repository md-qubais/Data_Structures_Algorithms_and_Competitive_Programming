#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Node{
public:
	char data;
	int cost;
	Node*left;
	Node*right;
	Node(char data,int cost){
		this->data=data;
		this->cost=cost;
		left=right=NULL;
	}
};
class NodeCompare{
public:
	bool operator()(Node *a,Node *b){
		return a->cost>b->cost;
	}
};

class Huffman{
public:
	string s;
	unordered_map<char,string> encode;
	unordered_map<string,char> decode;
	unordered_map<char,int> freq;
	Huffman(){
		this->s="";
	}
	Huffman(string s){
		this->s=s;
	}
	void preorder(Node*temp,string str){
		if(temp==NULL){
			return;
		}
		if(temp->left==NULL and temp->right==NULL){
          encode[temp->data]=str;
          decode[str]=temp->data;
		}
		preorder(temp->left,str+"0");
		preorder(temp->right,str+"1");
	}
	string encoding(string s){
		priority_queue<Node*,vector<Node*>,NodeCompare> q;
		for(int i=0;i<s.length();i++){
			freq[s[i]]++;
		}
		for(auto it:freq){
			Node *n=new Node(it.first,it.second);
			q.push(n);
		}
		while(q.size()!=1){
           Node* min1=q.top(); q.pop();
           Node* min2=q.top(); q.pop();
           Node *n=new Node('\0',min1->cost+min2->cost);
           n->left=min1;
           n->right=min2;
           q.push(n);
		}
		Node*temp=q.top();
		q.pop();
		//now here we are traversing the tree
		//i mean preorder traversal
		preorder(temp,"");
		string str="";
		for(int i=0;i<s.length();i++){
			str+=encode[s[i]];
        }
          
          return str;          
	}
	string decoding(string s){
		string str="";
		string ans="";
		for(int i=0;i<s.length();i++){
			str+=s[i];
			if(decode.count(str)!=0){
                  ans+=decode[str];
                  str="";
			}

		}
         return ans;
	}
};

int32_t main(){
	qubais_judge;
	IOS; 
	Huffman h;
	string Encode=h.encoding("abbacccabbbcaddbabbcaaabdddd");
	//string Decode=h.decoding(Encode);
	//cout<<Decode<<endl;
	//now we have to do size reduction 
	//and convert them into bitset
    //now here below we are converting the
    //below encoded data in the bits or bitsets
    bitset<100> b;
    for(int i=0;i<Encode.size();i++){
    	if(Encode[i]=='1'){
          b[i]=1;
    	}
    }
    //here below we have sucessfully encoded
    //the data and we have converted into the compressed
    //form ie we have minimize and reduce the size
    //here using the bitset we have done size reduction
    //process so by here after we can just convert
    //the bitsets into the string and iterate over the
    //encoded and decode it to get the initial data
    //and by storing them into minimum cost as well
    //so this technique is known as the huffman encoding
    //and huffman decoding technique
    //actually known as the huffman coding technique
    //technique technique
    for(int i=0;i<b.size();i++){
    	cout<<b[i];
    }
	return 0;    
}