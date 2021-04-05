#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void number_to_spell(int num){
if(num<1){
return ;
}
if(num>=10){
number_to_spell(num/10);
}
int n=num%10;
switch(n){
case 0:
cout<<"zero"<<" ";
break;
case 1:
cout<<"one"<<" ";
break;
case 2:
cout<<"two"<<" ";
break;
case 3:
cout<<"three"<<" ";
break;
case 4:
cout<<"four"<<" ";
break;
case 5:
cout<<"five"<<" ";
break;
case 6:
cout<<"six"<<" ";
break;
case 7:
cout<<"seven"<<" ";
break;
case 8:
cout<<"eight"<<" ";
break;
case 9:
cout<<"nine"<<" ";
break;
}
}
void no_to_spell(int num){
if(num==0){
return ;
}
no_to_spell(num/10);
cout<<words[num%10]<<" ";
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
    number_to_spell(num);
    return 0;     
}