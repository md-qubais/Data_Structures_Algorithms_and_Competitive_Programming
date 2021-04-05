#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int32_t main(){
	qubais_judge;
	IOS;
	//input buffer 10\n and then string
	//while scanning input buffer it stores
	//the int in the int variable and then
	//boom the next thing is \n then it wont
	//skip that it will store than in the 
	//next string then boom and by default
	//after that the string varible wont take any string
	//so we meagerly use cin.ignore() or cin.get()
	//to ignore or its a trick to ignore the character \n

	//and below will only work if we are using
	//character array instead of using the
	//entire string
	int a;
	//string str;
	char str[100];
	cin>>a;
	//cin.ignore();
	//cin.get();

    //we can use either of both of them

    //it will only work if we are using 
    //the entire line as the input
	cin.get(str,100);
	//cin>>str;-->it will wont work for this
	cout<<a<<" "<<str<<endl;
	return 0;   
}