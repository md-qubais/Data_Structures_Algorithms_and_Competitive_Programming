vector<vector<string>> groupAnagrams(vector<string>& str){
	vector<vector<string>> ans;
	if(str.size()==0){
		return ans;
	}
	if(str.size()==1){
		ans.push_back(str);
		return ans;
	}
	//single pass
	unordered_map<string,vector<string>> m;
	for(auto it:str){
		string temp=str;
		sort(temp.begin(),temp.end());
		m[temp].push_back(it);
	}
	for(auto it:m){
		ans.push_back(it.second);
	}
	return ans;
}