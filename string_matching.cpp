vector<string> stringMatching(vector<string>& words){
	vector<string> ans;
	for(int i=0;i<words.size();i++){
		for(int j=0;j<words.size();j++){
			if(words[i]==words[j] or words[i].length()>words[j].length()){
				continue;
			}else{
				if(words[j].find(words[i])!=0){
					ans.push_back(words[i]);
				}
			}
		}
	}
	return ans;
} 