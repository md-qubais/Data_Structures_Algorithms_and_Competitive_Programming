#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

class node{
public:
	int val;
	node*next;//self referential pointer
	//node(int val):val(val),next(NULL){}
	node(int val){
		this->val=val;
		next=NULL;
	}
};

void InsertAtHead(node* &head,node* &tail,int val){
	node *n=new node(val);
	if(head==NULL){//if no node present
		head=tail=n;
	}else{// if linkedlist is present
		n->next=head;
		head=n;
	}
}

void InsertAtTail(node*&head,node*&tail,int val){
	node*n=new node(val);
	if(tail==NULL){
		head=tail=n;
	}else{
		tail->next=n;
		tail=n;
	}
}
int get_instersect(node*head1,node*head2){
	node*ans=NULL;
	while(head1 and head2){
		if(head1->val==head2->val){
			ans=head1;
			head1=head1->next;
			head2=head2->next;
		}else{
			break;
		}
	}
	return ans->val;
}


int32_t main(){
	qubais_judge;
	IOS;
	node*head1=NULL,*tail1=NULL;
	node*head2=NULL,*tail2=NULL;
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		InsertAtHead(head1,tail1,num);
	}
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		InsertAtHead(head1,tail1,num);
	}
	cout<<get_instersect(head1,head2);
	return 0;
}