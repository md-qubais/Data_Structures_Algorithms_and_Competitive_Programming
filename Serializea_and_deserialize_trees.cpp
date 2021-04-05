#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	//same as the preorder traversal
	//it means constructor the tree by only
	//preorder traversal and by not using inorder
	//traversal
	//so what we can do is just traverse the tree
	//and store the null values as -1 in an array
	//and after when we wanted to print that null values
	//after that array by preorder traversal then we 
	//can just imagine that there is no node if the current
	//node left or right node hits the null val(means -1)
	//so by this way we can also print the values 
	//by using the preorder tech
	//and its been a great process to traverse the tree
	return 0;     
}