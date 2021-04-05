#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	//it simply creates a single integer bucket and
	//new keyword just returns its address
	//and to catch that address we can simply
	//have an address
	int *a=new int;
	*a=10;
	cout<<*a<<endl;

	//it simply creates an continuos memory allocation
	//or can be known as the array of ints and 
	//just returns its base/starting address
	//to catch that address we can simply have a
	//pointer
	int *arr=new int[10];
	for(int i=0;i<10;i++){
		arr[i]=i+1;
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	//it just creates array of pointers 
	//to catch that array of pointers we have have
	//-->to catch a pointer we have have either
	//of same type or of its pointer+1 pointer type
	//so if we took the same then its pointer to
	//where the next pointer is point
	//but we have to point that pointer 
	//so we are actually taking double pointer type
	//the after derefering it we can create
	//dynamic 2d array
	int **array=new int*[3];
	for(int i=0;i<3;i++){
		array[i]=new int[3];
	}
	int count=1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			array[i][j]=count++;
		}
	}
	for(int i=0;i<3;++i){
		for(int j=0;j<3;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;   
}