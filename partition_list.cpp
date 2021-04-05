void pivot(vector<int>&arr){
	int i=0;
	int j=0;
	

}
ListNode* partition(ListNode* head, int x){
	ListNode*ans=NULL;
	ListNode*tail=NULL;
	if(head==NULL){
		return head;
	}
	if(head->next==NULL){
		return head;
	}
	vector<int> arr;
	bool b=true;
	ListNode*temp=head;
	while(temp!=NULL){
		if(temp->val==x and b){
			b=false;
		}else{
			arr.push_back(temp->val);
		}
		temp=temp->next;
	}
	arr.push_back(x);
	pivot(arr);
}