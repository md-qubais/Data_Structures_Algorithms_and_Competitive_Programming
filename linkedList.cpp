#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;  
//from here the actual data structures and algorithms
//part starts from here
//This is the file of implementing the linked list
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
        next=NULL;
	}
};


//now here there can be many ways to define
//the linkedlist or to create the linkedlist

//linkedlist class  (object oreinted programming)
/*class linkedlist{
node*head;
node*tail;
public:
	linkedlist(){
//write some code here
	}
	void insert(int d){
// write some code here
	}
};*/
//but here we are not using the linkedlist
//class to build the linkedlist
//cause there is nothing
//any concept would be not clear that
//when to pass by valu or when to pass by refer
//it would be clear in functions




//functions (procedural programming)
//mostly in any interview we only get functions
//we will get head and we can get tails 
//so it is better to create the linkedlist 
//in procedural programming
void insertAtHead(node*&head,int d){
	//here in the parameter we are actually
	//passing the head by reference so that 
	//we can have change in the actaul value of head
	//in the main function
if(head==NULL){
	head=new node(d);
return ;
}
node*temp=new node(d);
temp->next=head;
head=temp;
}
//here we are passing the parameter by value
//coz we dont want to change the actual head 
//because at the another time after printing 
//the linkedlist we can have some work to do
//by using the head of the linked list


//here we are inserting the elements
//where ever and which ever position we want
//and which position we need to insert the element
int length(node*head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}

void insertAtTail(node*head,int d){
	while(head->next!=NULL){
		head=head->next;
	}
	node*temp=new node(d);
    head->next=temp;
}



void insertInMiddle(node*&head,int d,int pos){
if(head==NULL or pos==0){
insertAtHead(head,d);
return ;
}
else if(pos>length(head)){
insertAtTail(head,d);
}else{
node*temp=head;
node*n=new node(d);
int jump=1;
while(jump<=pos-1){
jump++;
temp=temp->next;
}
n->next=temp->next;
temp->next=n;
}
}

void print(node*head){
	while(head!=NULL){
 cout<<head->data<<"->";
	head=head->next;
	}
cout<<"NULL";
}

//if we use array and we delete the head
//of the element of the array then we are wasting
//some of the space
//and after that if we dont want to waste the space
//we are shifting the array 
//then it takes lot of time
//so deleting the head from the linkedlist is very
//easy and not time consuming and not space consuming
//process
void deleteHead(node*&head){
	if(head==NULL){
		return ;
	}
	/*
 node*temp=head;
 head=head->next;
 delete temp;
*///or we can write like this
	node*temp=head->next;
	delete head;
	head=temp;
}

void deleteTail(node*head){
if(head==NULL){
	return ;
}
node*temp=NULL;
while(head->next!=NULL){
temp=head;
head=head->next;
}
temp->next=NULL;
delete head;
}

void deleteMiddle(node*&head,int pos){
if(head==NULL ){
return ;
}
if(pos==0){
deleteHead(head);
return ;
}
if(pos>length(head)){
deleteTail(head);
return ;
}
node*temp=head;
int jump=1;
while(jump<=pos-1){
jump++;
temp=temp->next;
}
node*n=temp->next;
temp->next=n->next;
delete n;
}

//iterative search in linkedlist
bool searchiteratively(node*head,int key){
while(head!=NULL){
if(head->data==key){
return true;
}
head=head->next;
}
return false;
}

//bool search recursively in linkedlist
bool searchrecursively(node*head,int key){
	if(head==NULL){
     return false;
	}
	if(head->data==key){
return true;
	}
return searchrecursively(head->next,key);
}

//here we are taking input from the user
//to build a linkedlist
void input(node*&head){
	int d;
	cin>>d;
	head=new node(d);
	node*temp=head;
	cin>>d;
	while(d!=-1){
    node*n=new node(d);
    temp->next=n;
    temp=n;
    cin>>d;
	}
	temp->next=head->next->next;
}

node* take_input(){
	int d;
	cin>>d;
	node*head=new node(d);
	node*temp=head;
	cin>>d;
	while(d!=-1){
    node*n=new node(d);
    temp->next=n;
    temp=n;
    cin>>d;
	}
return head;
}

//operator overloading
istream& operator>>(istream &is,node*&head){
	input(head);
	//head=take_input();
return is;
}
//oprator overloading
ostream& operator<<(ostream &os,node*head){
	print(head);
	return os;
}

//here we are reversing the linkedlist iteratively
void reverse(node*&head){
	node*prev=NULL;
	node*curr=NULL;
    while(head!=NULL){
    	prev=curr;
    curr=head;
    head=head->next;
    curr->next=prev;
    }
    head=curr;

}

//here we are writing a function to reverse a 
//linkedlist recursively by qubais method
//here we are reversing the linked list at the
//time of returning;
//head recursion/bottom up technique
void reverserec(node*&head,node*prev,node*curr){
if(head==NULL){
head=curr;
return;
}
prev=curr;
curr=head;
head=head->next;
reverserec(head,prev,curr);
curr->next=prev;
}
//here this is also qubais method to reverse 
//the linkedlist
//here we are reversing the linkedlist
//at the time of going//tail recursion
//top to bottom tech
void reverseRec(node*&head,node*prev,node*curr){
if(head==NULL){
head=curr;
return;
}
prev=curr;
curr=head;
head=head->next;
curr->next=prev;
reverseRec(head,prev,curr);
}


//here we are going to reverse a linkedlist
//actual method and technique
node* recReverse(node*head){
if(head==NULL or head->next==NULL){
return head;
}
node*shead=recReverse(head->next);
node*temp=head->next;
temp->next=head;
head->next=NULL;
/*
it takes o(n square) time complexity
//to make it more efficient we have used above technique
while(temp->next!=NULL){
temp=temp->next;
}
head->next=NULL;
temp->next=head;
*/return shead;
}



//mid point of the linkedlist using qubais technique
//this technique is same as the actual technique
node* midpointqubais(node*head){
if(head==NULL or head->next==NULL){
return head;
}
node*runner=head;
while(runner!=NULL){
runner=runner->next;
if(runner==NULL or runner->next==NULL){
break;
}
runner=runner->next;
head=head->next;
}
return head;
}

//kth node from the end of the linkedlist
node* kthnode_from_end(node*head,int k){
	int i=1;
	node*slow=head;
	while(i<=k){
     head=head->next;
     i++;
	}
	while(head!=NULL){
		head=head->next;
		slow=slow->next;
	}


return slow;
}

//now we are going to do the merging
//the two sorted linkelist
//into one linkedlist
//here we are merging the linkedlist 
//by using recursion because thats the easy way
//to code and understand
node* merge(node*a,node*b){
//base case
	if(a==NULL){
       return b;
	}
	if(b==NULL){
    return a;
	}
	node*c=NULL;
	if(a->data<b->data){
    c=a;
    c->next=merge(a->next,b);
	}else{
    c=b;
    c->next=merge(a,b->next);
	}
return c;
}



//here we are doing merge sort by breaking 
//their links and then sorting them recursively
node* merge_sort(node*head){
	//base case
	if(head==NULL or head->next==NULL){
     return head;
	}
	//now divide the linkedlist
	node*mid=midpointqubais(head);
	node*a=head;
	node*b=mid->next;
	mid->next=NULL;
	//now after dividing the linkedlist
    //we are going to call recursive function
    //by using their recursive relation
    a=merge_sort(a);
    b=merge_sort(b);


	//we are now going to merge them
	node*c=merge(a,b);return c;
}

//here qubais function to remove the cycle
//here we are keeping the track of the previous
//node that which we have to delete and make it NULL
void remove_cycle(node*s,node*f){
	node*prev=NULL;
	while(s!=f){
    s=s->next;
    prev=f;
    f=f->next;
	}
	prev->next=NULL;
}




//detection the cycle by qubais tech
//to detect the cycle of the linkedlist
bool detect_cycle(node*head){
node*s=head;
node*f=head;
while(f!=NULL){
f=f->next;
if(f!=NULL or f->next!=NULL){
f=f->next;
}else{
	return false;
}
s=s->next;
if(f==s){
	remove_cycle(head,f);
return true;
}

}
return false;
}

//detection of the cycle actual method
//this is the actual and optimized method
//to detect the cycle of the linkedlist
bool Detection_of_cycle(node*head){
node*s=head;
node*f=head;
node*prev=NULL;
while(f!=NULL and f->next!=NULL){
f=f->next->next;
s=s->next;
if(f==s){
	remove_cycle(head,f);
return true;
}
}
return false;
}


//now from here we are going to write the circular
//linkedlist
void insertCircular(node*&head,int d){
	if(head==NULL){
   head=new node(d);
   head->next=head;
	}else{
    node*temp=head;
    while(temp->next!=head){
    temp=temp->next;
    }
    node*n=new node(d);
    n->next=temp->next;
    temp->next=n;
	}

}

void print_circular(node*head){
	node*temp=head;
	while(temp->next!=head){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<temp->data<<"->";
	cout<<"NULL";
}

node* getnode(node*head,int data){
	node*temp=head;
	while(temp->next!=head){
     if(temp->data==data){
     	return temp;
     }
    temp=temp->next;
	}
	if(temp->data==data){
		return temp;
	}
return NULL;
}


void deleteNode(node*&head,int data){
	node*del=getnode(head,data);
	if(del==NULL){
		return ;
	}
	if(del==head){
		node*temp=head;
		while(temp->next!=head){
           temp=temp->next;
		}
		head=head->next;
		temp->next=head;
		delete del;
		return ;
	}
   if(del->next==head){
               node*temp=head;
               while(temp->next!=del){
               	temp=temp->next;
               }
            temp->next=head;
            delete del;
            return ;

   }
    


	node*temp=head;
	while(temp->next!=del){
     temp=temp->next;
	}
	temp->next=del->next;
	delete del;

}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	//node*head=NULL;
/*	insertAtHead(head,1);
	insertAtHead(head,2);
	insertAtHead(head,3);
	insertAtHead(head,4);
	insertAtHead(head,5);
	insertAtHead(head,6);
	print(head);
	//inserting at given and disered position
	//before the last position
	/*insertInMiddle(head,6,0);
	print(head);
	deleteHead(head);
	print(head);
	deleteTail(head);
	print(head);
	deleteMiddle(head,2);
	int key=7;
	if(searchrecursively(head,key)){
      cout<<"The element "<<key<<" is present in the linkedlist"<<endl;
	}else cout<<"The element "<<key<<" is not present in the linkedlist"<<endl;
    */
	//input(head);
	
	/*node*head=NULL;
	cin>>head;
	//cout<<"The linkedlist before reversing it"<<endl;
	cout<<head<<endl;
	//now here we are going to reverse the linkedlist
	//reverse(head);
	//head=recReverse(head);
	//cout<<"The linkedlist after reversing it"<<endl;
	//cout<<head;
	node*mid=midpointqubais(head);
	cout<<"The mid point of the linked list is "<<mid->data<<endl;
	node*kth=kthnode_from_end(head,2);
	cout<<"The kth:"<<2<<" node frome the end is:"<<kth->data<<endl;
	*//*
	node*first=NULL;
	node*second=NULL;
	cin>>first>>second;
	cout<<first<<endl<<second<<endl;
    node*c=merge(first,second);
    cout<<"The linked list after merging the two linked list are:"<<endl;
    cout<<c<<endl;*//*
    node*head=NULL;
    cin>>head;
    cout<<"The linkedlist before sorting"<<endl;
    cout<<head<<endl;
    cout<<"The linkedlist after sorting"<<endl;
    head=merge_sort(head);
    cout<<head<<endl;*/
  /*  node*head=NULL;
    cin>>head;
     if(detect_cycle(head)){
    cout<<"Cycle detected in the linkedlist"<<endl;
     cout<<"and has been removed"<<endl;
     cout<<head<<endl;
     }
     else{
     	cout<<head<<" cycle is not present in the current linkedlist"<<endl;
     }*/
	/*node*head=NULL;
	insertCircular(head,1);
	insertCircular(head,2);
	insertCircular(head,3);
	insertCircular(head,4);
	insertCircular(head,5);
	print_circular(head);
	cout<<endl;
    deleteNode(head,2);
    print_circular(head);
   	return 0;*/
   	//now here below we are going to learn about
   	//the stl known as forward list::singly linkedlist
   	//and list->doubly linked list
    /*list<string> l1{"apple","banana","mango"};
    l1.push_back("carrot");
    l1.push_back("dragon fruit");
    l1.push_back("guava");
    l1.push_back("pumpkin");
    string str;
    getline(cin,str);
    l1.remove("dragon fruit");
    l1.remove(str);
    /*
    auto it=l1.begin()+3
    l1.erase(it);*/
    //actually the above statements wont work
    //because the memory is not linear
    //so it wont work in case of list
    //it will work in case of vector
    /*auto it=l1.begin();
    it++;
    l1.erase(it);
    it=l1.begin();
    l1.insert(it,"fruit_juice"); 
    for(auto s:l1){
    	cout<<s<<"->";
    }*/
    //now we are going to do
    //list example implementing a graph data structures
    list<pair<int,int>> *l;
    int n;
    cin>>n;
    l=new list<pair<int,int>>[n];
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
    int x,y,wt;//this means edge from x to y
    //with following weights wt
    cin>>x>>y>>wt;
    l[x].push_back(make_pair(y,wt));
    l[y].push_back(make_pair(x,wt));
    //here the above two statements means 
    //the graph where the edeges are x and y
    //and the vertices are bi-derictional
    
    }
    for(int i=0;i<n;i++){
       cout<<"linkedlist "<<i<<"->";
       for(auto x:l[i]){
    cout<<"("<<x.first<<","<<x.second<<")";
       }
       cout<<endl;
    }
}