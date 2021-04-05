#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
	    int rowdir[4]={0};
	    int coldir[4]={0};
	    int r=1;
	    int c=1;
		int n,k,si,sj;
		cin>>n>>k>>si>>sj;
		if(si==sj){
			cout<<n<<" "<<n<<endl;
			continue;
		}
		//x+n-y-->si+n-sj,n
		if(si<sj){
			//first step is here
			si=si+n-sj;
			sj=n;
			rowdir[r++]=si;
			coldir[c++]=sj;
			
			//now second edge is opposite of it
			swap(si,sj);
			rowdir[r++]=si;
			coldir[c++]=sj;
			//now third edege
			si=si-sj;
			sj=0;
			rowdir[r++]=si;
			coldir[c++]=sj;
			
			//now the fourth one
			swap(si,sj);
			rowdir[r++]=si;
			coldir[c++]=sj;
			int num=k%4;
			if(num==0){
				cout<<rowdir[4]<<" "<<coldir[4]<<endl;
			}else{
				cout<<rowdir[num]<<" "<<coldir[num]<<endl;
			}
			continue;
		}else{
			//n,n+sj-si
			//first edge will be
			sj=n+sj-si;
			si=n;
			rowdir[r++]=si;
			coldir[c++]=sj;
			//now second edge
			swap(si,sj);
			rowdir[r++]=si;
			coldir[c++]=sj;
            //now third egde
            sj=n-si;
            si=0;
            rowdir[r++]=si;
            coldir[c++]=sj;
            //now fourth edge
            swap(si,sj);
            rowdir[r++]=si;
            coldir[c++]=sj;
            int num=k%4;
            if(num==0){
            	cout<<rowdir[4]<<" "<<coldir[4]<<endl;
            }else{
            	cout<<rowdir[num]<<" "<<coldir[num]<<endl;
            }
			continue;
		}
	}
	return 0;   
}










