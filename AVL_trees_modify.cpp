#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

class Node{
public:
	int data;
    Node*left;
    Node*right;
    int height;
    Node(int data){
    	this->data=data;
    	left=right=NULL;
    	height=1;
    }
};

void display(Node*temp){
if(temp==NULL){
return;
}
display(temp->left);
cout<<temp->data<<endl;
display(temp->right);
}

void display_level(Node*temp){
	queue<Node*> q;
	q.push(temp);
	while(!q.empty()){
        cout<<q.front()->data<<endl;
        if(q.front()->left!=NULL){
              q.push(q.front()->left);
        }
        if(q.front()->right!=NULL){
                q.push(q.front()->right);
        }
       q.pop();
	}
}






class AVL{
public:
	Node*root;
	AVL(){
		root=NULL;
	}
	AVL(int data){;
		root=new Node(data);
	}
	//for finding the height of the nodes/node
    int Height(Node*temp){
    	if(temp==NULL){
         return 0;
    	}
          return temp->height;
    }
    //here below is the code for balancing factor
   int balance_factor(Node*temp){
             if(temp==NULL){
                      return 0;
             }
             return Height(temp->left)-Height(temp->right);
   }

    //1) left-left rotation/case
	Node* right_rotate(Node*c){
		//here we are capturing the moments
		Node*b=c->left;
		Node*t3=b->right;
		//here below we are rotating
		b->right=c;
        c->left=t3;
        //now here we are updating the heighs of them
        //and eventually returing the rotated node
        c->height=max(Height(c->left),Height(c->right))+1;
        b->height=max(Height(b->left),Height(b->right))+1;
        return b;
	}
	//2) right-right rotation/case
	Node *left_rotate(Node*c){
		//here we are capturing the moments
      Node*b=c->right;
      Node*t2=b->left;
      //here we are actually rotating the nodes
      b->left=c;
      c->right=t2;
      //here we are actually updating the heights 
      //of the node and returning the rotated node
      c->height=max(Height(c->left),Height(c->right))+1;
      b->height=max(Height(b->left),Height(b->right))+1;
      return b;
	}


	Node* insert(Node*temp,int item){
       if(temp==NULL){
          return new Node(item);
       }
       else if(item>temp->data){
          temp->right=insert(temp->right,item);

       }
       else{
        temp->left=insert(temp->left,item);
       }
       //here updating the height of the nodes
       //while returning  bottom up
       //or known as the tail recursion
    temp->height=max(Height(temp->left),Height(temp->right))+1;
    int bf=balance_factor(temp);
    //here we are deciding the rotaionns of the 
    //tree
    //1) case left left case
   
     if(bf>1 and item>temp->left->data){
         
        //first rotating left the 2nd fron top is
        //right problem
       temp->left=left_rotate(temp->left);
        //second rotating right the 1st from top
        //is the left problem
        temp=right_rotate(temp);
    }
    else if(bf<-1 and item < temp->right->data){
          //first rotating right the 2nd from top
     	  //left  problem

          temp->right=right_rotate(temp->right);
          //second rotating left the 1st from top
          //is the right problem
          temp=left_rotate(temp);
    }else if(bf>1 and item<temp->data){
     temp=right_rotate(temp);
    }
   else  if(bf<-1 and item>temp->data){
       temp=left_rotate(temp);
    }
    return temp;
	}
};


int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	AVL *avl=new AVL;
	for(int i=0;i<n;i++){
       int num;
       cin>>num;
       avl->root=avl->insert(avl->root,num);
       display_level(avl->root);
       cout<<endl;
	}
	display_level(avl->root);
	return 0;    
}