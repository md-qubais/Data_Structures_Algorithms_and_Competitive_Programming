#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Queue{
public:
  
    int size() {
      // write your code here
    }

    void push(int val) {
      // write your code here
    }

    int pop() {
      // write your code here
    }

    int top() {
      // write your code here
    }
};
int32_t main(){
  qubais_judge;
  IOS;
  Queue st;
  while (true) {
    string str;
    cin>>str;
      if (str=="push") {
        int val;
        cin>>val;
        st.push(val);
      } else if (str=="pop") {
        int val = st.pop();
        if (val != -1) {
          cout<<val<<endl;
        }
      } else if (str=="top") {
        int val = st.top();
        if (val != -1) {
          cout<<val<<endl;
        }
      } else if (str=="size") {
        cout<<st.size()<<endl;
      }
    }
  return 0;
}
    