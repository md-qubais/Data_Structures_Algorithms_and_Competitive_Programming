#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class MyLinkedList {
public:
    /** Initialize your data structure here. */
    deque<int> q;
    MyLinkedList() {
        q={};
    }
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index<q.size()){
            return q[index];
        }
        return -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        q.push_front(val);
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        q.push_back(val);
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index==q.size()){
            q.push_back(val);
        }
       else if(index<q.size()){
           q.insert(q.begin()+index,val);
        }
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index<q.size()){
            q.erase(q.begin()+index);
        }
    }
    void display(){
        for(auto it:q){
            cout<<it<<" ";
        }
        cout<<endl;
    }
};
int32_t main(){
    qubais_judge;
    IOS;
    MyLinkedList myLinkedList;// = new MyLinkedList();
myLinkedList.addAtHead(1);
myLinkedList.addAtTail(3);
myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
cout<<myLinkedList.get(1)<<endl; 
myLinkedList.display();             // return 2
myLinkedList.deleteAtIndex(1);
myLinkedList.display();    // now the linked list is 1->3
cout<<myLinkedList.get(1)<<endl;      
    return 0;   
}