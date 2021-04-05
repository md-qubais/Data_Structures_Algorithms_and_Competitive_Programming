
#include<bits/stdc++.h>
using namespace std;   
bool isPalindrome(string& s){
    string rev = s;
    reverse(rev.begin(), rev.end());
    s="qubais";
    return s == rev;
}
bool comp(string s1, string s2)
{
    if(s1.length() < s2.length())
        return 1;
    else if(s1.length() > s2.length())
        return 0;
    else return s1 < s2;
}


int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

vector< string > data = {"b", "a", "c", "abc", "bca", "xy"};
sort(data.begin(), data.end(), comp);
for(string item : data)
        cout << item << " ";
 


/*vector< int > data = {100, 142, 138, 96, 32, 149};
swap(data[2], data[5]);
int val1 = *max_element(data.begin(), data.begin() +3);
int val2 = *max_element(data.begin()+3,data.end());
cout<< min(val1, val2);
return 0;*/
    string s = "bca";

   do {
        cout << s << ' ';
    } while(next_permutation(s.begin(), s.end()));

 cout << s;
    string str="quq";
    cout<<str<<endl;
    cout<<isPalindrome(str)<<endl;
    cout<<str<<endl;
}