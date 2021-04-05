ListNode* deleteDuplicates(ListNode* head){
	if(head==NULL){
		return head;
	}
	if(head->next==NULL){
		return head;
	}
	if(head->next->next==NULL){
		if(head->val==head->next->val){
			return NULL;
		}
		return head;
	}
	ListNode*first=head;
	ListNode*last=first->next;
	head=NULL;
	ListNode*prev=NULL;
	while(last){
		if(first->val==last->val){
			last=last->next;
		}else{
			if(first->next!=last){
				if(prev==NULL){
					first=last;
					head=first;
					last=last->next;
					continue;
				}
				prev->next=last;
				first=last;
				last=last->next;
			}else{
				if(prev==NULL){
					head=first;
				}
				prev=first;
				first=last;
				last=last->next;
			}
		}
	}
	if(first->next!=last){
		if(prev==NULL){
			return NULL;
		}
		prev->next=last;
	}
	return head;
}