#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//all source base of octal
void oct_to_binary(int num){
//first converting it into decimal
	string dec="";
	while(num>0){
		dec+=num%10+'0';
		num=num/10;
	}
	int ans=0;
	for(int i=0;i<dec.length();i++){
		ans+=(dec[i]-'0')*pow(8,i);
	}
	//second now converting it into binary
	string res="";
	while(ans>1){
      res+=ans%2+'0';
      ans=ans/2;
	}
	if(ans==1){
		res+='1';
	}else{
		res+='0';
	}
	reverse(res.begin(),res.end());
	cout<<res<<endl;
}

void oct_to_dec(int num){
int ans=0;
int k=1;
ans+=(num%10)*pow(8,0);
num=num/10;
while(num>0){
	ans+=(num%10)*pow(8,k);
	k++;
	num=num/10;
}
cout<<ans<<endl;
}

void oct_





//all source base of binary
void bin_to_hex(int num){
map<char,int> m;
for(int i=0;i<=9;i++){
m[i]=i+'0';
}
m[10]='A';
m[11]='B';
m[12]='C';
m[13]='D';
m[14]='E';
m[15]='F';
//first converting it inot binary
string bin="";
while(num>0){
	bin+=num%10+'0';
	num=num/10;
}



reverse(bin.begin(),bin.end());
//second we have to convert it into hexadecimal
int k=2;
int base=2;
string res="";
int n=0;
if(bin[bin.length()-1]=='1'){
n+=1;
}
for(int i=bin.length()-2;i>=0;i--){
if(bin[i]=='1' and k==1){
n+=1;
}else if(bin[i]=='1'){
n+=base;
}
base*=2;
k++;
if(k>4){
k=1;
base=1;
res+=m[n];
n=0;
}
}
if(n!=0){
res+=m[n];
}
reverse(res.begin(),res.end());
cout<<res<<endl;



}


void bin_to_dec(int num){
int ans=0;
int base=2;
if(num%10==1){
ans+=1;
}
num=num/10;
while(num>0){
if(num%10==1){
ans+=base;
}
num=num/10;
base*=2;
}
cout<<ans<<endl;
}


void bin_to_oct(int num){
string str="";
while(num>0){
	str+=num%10+'0';
	num=num/10;
}


int k=2;
	string ans="";
	int count=1;
	int n=0;
	if(str[0]=='1'){
		n+=1;
	}

	for(int i=1;i<=str.length()-1;i++){
             if(str[i]=='1'){
             	n+=k;
             }
             count++;
             k*=2;
             if(count>=3){
             	count=0;
             	k=1;
             	ans+=n+'0';
             	n=0;
             }
	}	
	if(n!=0){
		ans+=n+'0';
	};
	int val=0;
	for(int i=ans.length()-1;i>=0;i--){
		val=val*10+(ans[i]-'0');
	}
	cout<<val<<endl;
	
}

//all source base of decimal
void dec_to_bin(int num){
string res="";
while(num>1){
	res+=num%2+'0';
	num=num/2;
}
if(num==1){
res+='1';
}else{
	res+'0';
}
reverse(res.begin(),res.end());
cout<<res<<endl;
}



void dec_to_oct(int num){
string res="";
while(num>1){
	res+=num%2+'0';
	num=num/2;
}
if(num==1){
res+='1';
}else{
	res+'0';
}
string str=res;

int k=2;
	string ans="";
	int count=1;
	int n=0;
	if(str[0]=='1'){
		n+=1;
	}

	for(int i=1;i<=str.length()-1;i++){
             if(str[i]=='1'){
             	n+=k;
             }
             count++;
             k*=2;
             if(count>=3){
             	count=0;
             	k=1;
             	ans+=n+'0';
             	n=0;
             }
	}	
	if(n!=0){
		ans+=n+'0';
	};
	int val=0;
	for(int i=ans.length()-1;i>=0;i--){
		val=val*10+(ans[i]-'0');
	}
	cout<<val<<endl;


}

void dec_to_hex(int num){
string res="";
while(num>1){
	res+=num%2+'0';
	num=num/2;
}
if(num==1){
res+='1';
}else{
	res+'0';
}
reverse(res.begin(),res.end());


map<char,int> m;
for(int i=0;i<=9;i++){
m[i]=i+'0';
}
m[10]='A';
m[11]='B';
m[12]='C';
m[13]='D';
m[14]='E';
m[15]='F';
//first converting it inot binary
string bin=res;



//second we have to convert it into hexadecimal
int k=2;
int base=2;
res="";
int n=0;
if(bin[bin.length()-1]=='1'){
n+=1;
}
for(int i=bin.length()-2;i>=0;i--){
if(bin[i]=='1' and k==1){
n+=1;
}else if(bin[i]=='1'){
n+=base;
}
base*=2;
k++;
if(k>4){
k=1;
base=1;
res+=m[n];
n=0;
}
}
if(n!=0){
res+=m[n];
}
reverse(res.begin(),res.end());
cout<<res<<endl;



}


int32_t main(){
	qubais_judge;
	IOS;	
	int src;
	int dis;
	int num;
	cin>>src>>dis>>num;
	//converting octal to all formats
	if(src==8 and dis==2){
	oct_to_binary(num);
		return 0;
	}
    //converting binay to all formats
	 if(src==2 and dis==16){
		bin_to_hex(num);
		return 0;
	}if(src==2 and dis==10){
		bin_to_dec(num);
		return 0;
	}
	if(src==2 and dis==8){
		bin_to_oct(num);
		return 0;
	}
	//converting hexadecimal to all formats
	//converting decimal to all formats
	if(src==10 and dis==2){
		dec_to_bin(num);
		return 0;
	}
	if(src==10 and dis==8){
		dec_to_oct(num);
		return 0;
	}
	if(src==10 and dis==16){
		dec_to_hex(num);
		return 0;
	}
	if(src==16 and dis==10)
	{
		oct_to_dec(num);
		return 0;

	}
	return 0;   
}