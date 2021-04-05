https://leetcode.com/problems/merge-k-sorted-lists/
ListNode* mergeKLists(vector<ListNode*>& lists){
	ListNode*ans=NULL;
	ListNode*temp=NULL;
	vector<int> v;
	for(int i=0;i<lists.size();i++){
		ListNode*temp=lists[i];
		while(temp){
			v.push_back(temp->val);
			temp=temp->next;
		}
	}
	sort(v.begin(),v.end());
	for(auto it:v){
		if(ans==NULL){
			ans=new ListNode(it);
			temp=ans;
		}else{
			ListNode*n=new ListNode(it);
			temp->next=n;
			temp=n;
		}
	}
	return ans;
}