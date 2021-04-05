#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Myqueue{
	public:
		stack<int> s1;
		stack<int> s2;
    int size() {
      // write your code here
    	return s1.size();
    }

    void add(int val) {
      // write your code here
    	while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int remove() {
      // write your code here
        if(s1.empty()){
            return -1;
        }
        int val=s1.top();
        s1.pop();
        return val;
    }

    int peek() {
      // write your code here
        if(s1.empty()){
            return -1;
        }
        return s1.top();
    }
};
int32_t main(){
	qubais_judge;
	IOS;
	Myqueue st;
	while(true){
		string s;
		cin>>s;
		if(s=="quit"){
			break;
		}
		if(s=="add"){
			int val;
			cin>>val;
			st.add(val);
		}
		if(s=="remove"){
			int val=st.remove();
			if(val==-1){
				cout<<"Queue underflow"<<endl;
			}else cout<<val<<endl;
		}
		if(s=="peek"){
			int val=st.peek();
			if(val==-1){
				cout<<"Queue underflow"<<endl;
			}
			else cout<<val<<endl;
		}
		if(s=="size"){
			cout<<st.size()<<endl;
		}
	}
	return 0;
}