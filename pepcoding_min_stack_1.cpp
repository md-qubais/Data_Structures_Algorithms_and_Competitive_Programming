#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Stack{
public:
	int *arr;
	int *Min;
	int curr;
	int max_size;
	Stack(int size=100){
		max_size=size;
		arr=new int[max_size];
		Min=new int[max_size];
		curr=0;
	}
	void display(){
		for(int i=curr-1;i>=0;i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	int pop(){
		if(curr>0){
			return arr[--curr];
		}
		cout<<"Stack underflow"<<endl;
		return -1;
	}
	void push(int num){
		if(curr==max_size){
			max_size=max_size*2;
			int *a=new int[max_size];
			for(int i=0;i<curr;i++){
				a[i]=arr[i];
			}
			arr=a;
			a=new int[max_size];
			for(int i=0;i<curr;i++){
				a[i]=Min[i];
			}
			Min=a;
		}
		int index=curr;
		arr[curr++]=num;
		if(index==0){
			Min[index]=num;
		}else{
			if(num<Min[index-1]){
				Min[index]=num;
			}else{
				Min[index]=Min[index-1];
			}
		}
	}
	int min(){
		if(curr==0){
			cout<<"Stack underflow"<<endl;
			return -1;
		}
		return Min[curr-1];
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
	Stack s;
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
			cout<<s.pop()<<endl;
		}
		if(str=="display"){
			s.display();
		}
		if(str=="size"){
			cout<<s.size()<<endl;
		}
		if(str=="min"){
			cout<<s.min()<<endl;
		}
	}
	return 0;
}