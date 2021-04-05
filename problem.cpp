#include<bits/stdc++.h>
using namespace std;
int main() {
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
   int numberofSwaps=0;
    for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
     int no=0;
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberofSwaps++;
            no++;
        }
    }
    
    // If no elements were swapped during a traversal, array is sorted
    if (no == 0) {
        break;
    }
}
cout<<"Array is sorted in "<<numberofSwaps<<" swaps."<<endl;
cout<<"First Element: "<<a[0]<<endl;
cout<<"Last Element: "<<a[n-1]<<endl;
    // Write Your Code Here


    return 0;
}
