#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
class Student{
public:
	string name;
	int marks;
};

void bucket_sort(Student *s,int n){
vector<Student> v[101];
for(int i=0;i<n;i++){
v[s[i].marks].push_back(s[i]);
}
for(int i=100;i>=0;i--){
for(auto it=v[i].begin();it!=v[i].end();it++){
cout<<(*it).name<<" "<<(*it).marks<<endl;
}
}
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
    Student s[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>s[i].name>>s[i].marks;
    }
    bucket_sort(s,n);
	return 0;     
}