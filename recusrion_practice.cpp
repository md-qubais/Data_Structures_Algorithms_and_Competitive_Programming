#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//Factorial of a given number using recursion
int fact(int num){
	if(num==1){
		return 1;
	}
	int small_fact=fact(num-1);
	return num*small_fact;
}

//Fibonacci of a given number using recursion
int fib(int num){
	if(num==0){
        return 0;
	}
	if(num==1){
   return 1;
	}
	int small_fib=fib(num-1);
	int small_fib1=fib(num-2);
	return small_fib+small_fib1;
}

//here printing the value of an array in increasing order
void inc_print(int *arr,int i){
if(i<0){
return;
}
inc_print(arr,i-1);
cout<<arr[i]<<endl;
}

//here printing the value of an array in decreasing order
void dec_print(int *arr,int num){
	if(num<0){
         return;
	}
	cout<<arr[num]<<endl;
	dec_print(arr,num-1);
}

//here program for if the given array is sorted or not
bool isSorted(int *arr,int num){
	if(num<1){
    return true;
	}
	if(arr[num]>arr[num-1] and isSorted(arr,num-1)){
        return true; 
	}
return false;
}

//performing binary_search
//over an array 
//using recursion
bool search(int *arr,int s,int mid,int e,int key){
if(s>e){
return false;
}
if(arr[mid]==key){
return true;
}
if(key>mid){
s=mid+1;
mid=(s+e)/2;
return search(arr,s,mid,e,key);
}
e=mid-1;
mid=(s+e)/2;
return search(arr,s,mid,e,key);
}


//now here this is the program to find
//the multiplication using recursion
int m(int a,int b){
if(b==1){
return a;
}
return a+m(a,b-1);
}

//Below is the program for the 
//power(a,n) using recusrion
int p(int a,int n){
if(n==1){
return a;
}
return a*p(a,n-1);
}

//here in the below program we are writing
//the code for first occurance of the give element

int first_occur(int *arr,int num,int i,int key){
if(i==num){
return -1;
}
if(arr[i]==key){
return i;
}
return first_occur(arr,num,i+1,key);
}


//here the below program is to find the last
//occurance of the given element
int last_occur(int *arr,int num,int i,int key){
if(i==num){
return -1;
}
if(arr[i]==key){
return i;
}
return last_occur(arr,num,i-1,key);
}

//here below some another programs for 
//first occurance and last occurance
int l_occur(){
return 0;
}

int f_occur(int *arr,int num,int i,int key){
	if(i==num){
      return -1;
	}
	if(arr[i]==key){
        return i;
	}
	int n=f_occur(arr,num,i+1,key);
	return n;
}



//fast power recursion
int fast_power(int a,int n){
if(n==0){
return 1;
}
int small=fast_power(a,n/2);
small=small*small;
if(n&1){
small=small*a;
}
return small;
}

//now we are using bubble_sort using recursion
void bubble_sort(int *arr,int n){
if(n==0){
return;
}
for(int i=0;i<n-1;i++){
if(arr[i]>arr[i+1]){
swap(arr[i],arr[i+1]);
}
}
bubble_sort(arr,n-1);
}

//now we are using bubble sort in another way
void bubble_sort1(int *arr,int n,int i){
	if(n==1){
return;
	}
	if(i==(n-1)){
       bubble_sort1(arr,n-1,0);
       return;
	}
if(arr[i]>arr[i+1]){
swap(arr[i],arr[i+1]);
}
bubble_sort1(arr,n,i+1);
}

//Merge sort using recusion

int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
         cin>>arr[i];
	}	
    return 0;     
}