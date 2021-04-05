#include<bits/stdc++.h>
using namespace std;
void createtreearray(int *arr,int n){
for(int i=1;i<=n;i++){
cin>>arr[i];
}
}
int getlchild(int *arr,int key,int n){
int i;
for( i=1;i<=n;i++){
if(arr[i]==key){
break;
}
}
int num=2*i;
return arr[num];
}
int getrchild(int *arr,int key,int n){
int i;
for( i=1;i<=n;i++){
if(arr[i]==key){
break;
}
}
int num=(2*i)+1;
return arr[num];
}


int getparent(int *arr,int key,int n){
int i;
for( i=1;i<=n;i++){
	if(arr[i]==key)
{
	 break; 
	} 
}
int num=i/2;
return arr[i/2];
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n;
    cin>>n;
    int arr[n+1];
    createtreearray(arr,n);
	int num;
	cin>>num;
	int child=getlchild(arr,num,n);
	if(child==0){
    cout<<num<<" has no leftchild"<<endl;
	}else cout<<"The left child of "<<num<<" is:"<<child<<endl;
	cin>>num;
	child=getrchild(arr,num,n);
	if(child==0){
      cout<<num<<" has no right child"<<endl;
	}
	else{
		cout<<"The right child of "<<num<<" is:"<<child<<endl;
	}
	cin>>num;
	child=getparent(arr,num,n);
	cout<<"The parent node or root node of "<<num<<" is:"<<child<<endl;
	return 0;
}