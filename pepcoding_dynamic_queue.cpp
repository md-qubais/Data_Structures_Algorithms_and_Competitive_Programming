#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//using only front varible
class Q{
public:
	int curr;
	int *arr;
	int max_size;
	int front;
	Q(int size){
		this->max_size=size;
		arr=new int[max_size];
		front=0;
		curr=0;
	}
	void add(int val){
		if(curr==max_size){
			int size=max_size;
			max_size=2*max_size;
			int *a=new int[max_size];
			for(int i=0;i<curr;i++){
				a[i]=arr[(front+i)%size];
			}
			arr=a;
			front=0;
		}
		arr[(front+curr)%max_size]=val;
		curr++;
	}
	
	void display(){
		for(int i=0;i<curr;i++){
			cout<<arr[(front+i)%max_size]<<" ";
		}
		cout<<endl;
	}
	void remove(){
		if(curr>0){
			curr--;
			int val=arr[front];
			front=(front+1)%max_size;
			cout<<val<<endl;
			return;
		}
		cout<<"Queue underflow"<<endl;
	}
	void peek(){
		if(curr>0){
			cout<<arr[front]<<endl;
			return;
		}
		cout<<"Queue underflow"<<endl;
	}
	int size(){
		return curr;
	}
	
};
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	Q q(n);
	while(true){
		string s;
		cin>>s;
		if(s=="quit"){
			break;
		}
		if(s=="add"){
			int n;
			cin>>n;
			q.add(n);
		}
		if(s=="remove"){
			q.remove();
		}
		if(s=="peek"){
			q.peek();
		}
		if(s=="display"){
			q.display();
		}
		if(s=="size"){
			cout<<q.size()<<endl;
		}
	}
	return 0;
}