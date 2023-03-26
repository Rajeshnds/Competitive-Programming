#include<bits/stdc++.h>
using namespace std;
int n,l;
string s;
map<string,int>m;
void read(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>s,m[s]++,l=max(l,m[s]);
}
void show(){
    cout<<l;
}
int main(){
    read();
    show();
}
