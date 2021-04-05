#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

class Heap{
public:
int *arr;
int n;
int end=1;
Heap(int n){
	this->n=n;
arr=new int[n];
arr[0]=-1;
}


void go_up(int idx){
if(idx>1){
if(arr[idx/2]>arr[idx]){
swap(arr[idx/2],arr[idx]);
go_up(idx/2);
}
}
return;
}

void heap_sort(int curr){
	int left=curr*2;
	int right=curr*2+1;
	int min_idx=curr;
	if(left<=(end-1) and arr[left]<arr[curr]){
    min_idx=left;
	}
	if(right<=(end-1) and arr[right]<arr[min_idx]){
    min_idx=right;
	}
	if(min_idx!=curr){
		swap(arr[curr],arr[min_idx]);
       heap_sort(min_idx);
	}

}


void pop(int num){
	int idx=0;
	for(int i=1;i<end;i++){
		if(arr[i]==num){
           idx=i;
     	}
	}
end--;
swap(arr[idx],arr[end]);
heap_sort(idx);
}


void push(int num){
if(end==1){
arr[end++]=num;
return;
}
arr[end++]=num;
go_up(end-1);
}


int get(){
	return arr[1];
}
};


int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	Heap h(n);
	while(n--){
    int choice;
    cin>>choice;
    if(choice==1){
    	int num;
    	cin>>num;
    	h.push(num);
    }
    else if(choice==2){
       int num;
       cin>>num;
       h.pop(num);
    }else{
    	cout<<"getting:"<<h.get()<<endl;
    }

	}
	return 0;   
}