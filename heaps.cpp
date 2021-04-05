#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
class Heap{
public:
	vector<int> v;
	bool minheap;
	Heap(int size=10,bool type=true){
		v.reserve(size);
		v.push_back(-1);
		minheap=type;
	}
	bool compare(int a,int b){
		if(minheap){
           return a<b;
		}
		return a>b;
	}
	void insert(int ele){
		v.push_back(ele);
		int ind=v.size()-1;
		int parent=ind/2;
		while(ind>1 and compare(v[ind],v[parent])){
            swap(v[ind],v[parent]);
            ind=parent;
            parent=ind/2;
		}
	}

	void heapify(int curr_ind){
    int last=v.size()-1;
    int left=2*curr_ind;
    int right=left+1;
    int min_index=curr_ind;
    if(left<=last and compare(v[left],v[curr_ind])){
       min_index=left;
    }
    if(right<=last and compare(v[right],v[min_index])){
           min_index=right;
    }
    if(min_index!=curr_ind){
        swap(v[min_index],v[curr_ind]);
        heapify(min_index);
    }
	}

	void del(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}
	void display(){
		for(int i=1;i<v.size();i++){
                cout<<v[i]<<" ";
		}
	}
   int get(){
         return v[1];
   }
};

void print(vector<int> v){
	for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
	}
	cout<<endl;
}


//here below the time complexity of the heap is 
//o(nlogn)
void Buildheap(vector<int> &v){
       for(int i=1;i<v.size();i++){
         int ind=i;
         int parent=i/2;
         while(ind>1 and v[parent]<v[ind]){
           swap(v[parent],v[ind]);
               ind=parent;
               parent=ind/2;
         }
       }
}

void heapify(vector<int> &v,int index){
	int left=2*index;
	int right=left+1;
	int max_index=index;
	int last=v.size()-1;
	if(left<=last and v[index]<v[left]){
         max_index=left;
	}
	if(right<=last and v[max_index]<v[right]){
		max_index=right;
	}
	if(max_index!=index){
        swap(v[max_index],v[index]);
        heapify(v,max_index);
	}

}





int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	return 0;     
}