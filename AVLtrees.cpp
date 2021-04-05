#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
int height;
struct node *lchild;
struct node *rchild;
};


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string str;
    getline(cin,str);
    cout<<str;
    return 0;
}