#include<bits/stdc++.h>
#define ll      long long
using namespace std;
void Increasing(int num){
if(num==0){
return ;
}
Increasing(num-1);
cout<<num<<endl;

}



void Decreasing(int num)
{
	if(num==0){
    return ;
	}
 cout<<num<<endl;
 Decreasing(num-1);
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    cout<<"This is known as Decreasing Recursion"<<endl;
    Decreasing(num);
    cout<<"The is known as Increasing Recursion"<<endl;
    Increasing(num);
    return 0;     
}