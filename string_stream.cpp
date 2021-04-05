#include<bits/stdc++.h>
#include <sstream>
#include <vector>
#include <iostream>

#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
     vector<int> res;
     int words;
     while(ss>>words){
     	res.push_back(words);
     	char ch;
     	ss>>ch;
     	 if((ch)==','){
     	 	continue;
     	 }
     	 else{
          break;
     	 }

     }
 return res;
}

int main() {
	qubais_judge;
	IOS;
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
