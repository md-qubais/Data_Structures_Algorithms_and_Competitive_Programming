#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class ListNode{
public:
	int val;
	ListNode *next;
	ListNode(){

	}
	ListNode(int val){
        this->val=val;
        next=NULL;
	}

};
ListNode *root;
void create_list(){
ListNode*temp=root;
int num;
cin>>num;
while(num!=-1){
	if(root==NULL){
root=new ListNode(num);
temp=root;
}else{
	ListNode*p=new ListNode(num);
	temp->next=p;
	temp=p;
}
cin>>num;
}
}
void display(){
	while(root){
          cout<<root->val<<endl;
          root=root->next;
	}
}

class Solution {
public:
    void reorderList(ListNode* head) {
     ListNode*p1=head,*q1=head->next,*p,*q;
     if(head==NULL and head->next==NULL){
     	return;
     }

     while(q1!=NULL and q1->next!=NULL){
            p=q1;
            q=p->next;
            while(q->next!=NULL){
               p=p->next;
               q=p->next;
            }
            q->next=p1->next;
            p->next=NULL;
            p1->next=q;
            p1=q1;
            q1=q1->next;
     }       
    }
};

int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	create_list();
	Solution s;
	s.reorderList(root);
	display();
	return 0;     
}