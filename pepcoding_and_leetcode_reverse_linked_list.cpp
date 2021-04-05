/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
	ListNode*temp=NULL;
	void reverseList_help(ListNode*head){
		if(head!=NULL){
			reverseList_help(head->next);
			if(temp==NULL){
				temp=head;
			}else head->next->next=head;
		}
	}
    ListNode* reverseList(ListNode* head){
    	if(head==NULL) return head;
        if(head->next==NULL) return head;
        reverseList_help(head);
    	head->next=NULL;
    	head=temp;
    	return head;
    }
};