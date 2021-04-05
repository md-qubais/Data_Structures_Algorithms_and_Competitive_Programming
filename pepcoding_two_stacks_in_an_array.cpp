#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Stack{
public:
	int *data;
    int tos1;
    int tos2;
    int size;
    Stack(int cap) {
      // write your code here
    	data=new int[cap*2];
    	tos1=-2;
    	tos2=0;
    	size=cap*2;
    }

    int size1() {
      // write your code here
    	if(tos1==-2){
    		return 0;
    	}
    	return tos1/2+1;
    }

    int size2() {
      // write your code here
    	if(tos2==0){
    		return 0;
    	}
    	return tos2/2;
    }

    void push1(int val) {
      // write your code here
    	if(tos1<size/2){
    		tos1+=2;
    		data[tos1]=val;
    	}else{
    		cout<<"Stack overflow"<<endl;
    	}
    }

    void push2(int val) {
      // write your code here
    	if(tos2<size/2){
    		tos2+=2;
    		data[tos2]=val;
    	}else{
    		cout<<"Stack overflow"<<endl;
    	}
    }

    int pop1() {
      // write your code here
    	if(size1()==0){
    		return -1;
    	}
    	int num=tos1;
    	tos1=tos1-2;
    	return data[num];
    }

    int pop2() {
      // write your code here

    	if(size2()==0){
    		return -1;
    	}
    	int num=tos2;
    	tos2=tos2-2;
    	return data[num];
    }

    int top1() {
      // write your code here
    	if(size1()==0){
    		return -1;
    	}
    	return data[tos1];
    }

    int top2() {
      // write your code here
    	if(size2()==0){
    		return -1;
    	}
    	return data[tos2];
    }
};
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	Stack st(n);
	while(true){
		string s;
		cin>>s;
		if(s=="quit"){
			break;
		}
		//push 1
		if(s=="push1"){
			int val;
			cin>>val;
			st.push1(val);
		}
		//push 2
		if(s=="push2"){
			int val;
			cin>>val;
			st.push2(val);
		}

		//top 1
		if(s=="top1"){
			if(st.top1()==-1){
				cout<<"Stack underflow"<<endl;
			}else cout<<st.top1()<<endl;
		}

		//top 2
		if(s=="top2"){
			if(st.top2()==-1){
				cout<<"Stack underflow"<<endl;
			}else cout<<st.top2()<<endl;
		}

		//pop 1
		if(s=="pop1"){
			int val=st.pop1();
			if(val==-1){
				cout<<"Stack underflow"<<endl;
			}else cout<<val<<endl;
		}

		//pop 2
		if(s=="pop2"){
			int val=st.pop2();
			if(val==-1){
				cout<<"Stack underflow"<<endl;
			}else cout<<val<<endl;
		}

		//size 1
		if(s=="size1"){
			cout<<st.size1()<<endl;
		}

		//size 2
		if(s=="size2"){
			cout<<st.size2()<<endl;
		}
	}
	return 0;
}