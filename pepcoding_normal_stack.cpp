#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Stack{
public:
	int *arr;
	int curr;
	int max_size;
	Stack(int size){
		max_size=size;
		arr=new int[max_size];
		curr=0;
	}
	void display(){
		for(int i=curr-1;i>=0;i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	void pop(){
		if(curr>0){
			cout<<arr[--curr]<<endl;
			return;
		}
		cout<<"Stack underflow"<<endl;
	}
	void push(int num){
		if(curr==max_size){
			cout<<"Stack overflow"<<endl;
			return;
		}
		arr[curr++]=num;
	}
	void top(){
		if(curr==0){
			cout<<"Stack underflow"<<endl;
			return;
		}
		cout<<arr[curr-1]<<endl;
	}
	int size(){
		if(curr==0){
			return 0;
		}
		return curr;
	}
};
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	Stack s(n);
	while(true){
		string str;
		cin>>str;
		if(str=="quit"){
			break;
		}
		if(str=="top"){
			s.top();
		}
		if(str=="push"){
			int n;
			cin>>n;
			s.push(n);
		}
		if(str=="pop"){
			s.pop();
		}
		if(str=="display"){
			s.display();
		}
		if(str=="size"){
			cout<<s.size()<<endl;
		}
	}
	return 0;
}