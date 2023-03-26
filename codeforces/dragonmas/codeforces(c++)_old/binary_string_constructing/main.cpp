#include<bits/stdc++.h>
using namespace std;
int a,b,x,k;
string s;
int main(){
    cin>>a>>b>>x;
    int k=x/2;
    for(int i=1;i<=b-k;i++)s+='1';
    for(int i=1;i<=a-k-(x%2||b==k);i++)s+='0';
    for(int i=1;i<=k;i++)s+="01";
    if(x%2||b==k)s+='0';
    cout<<s;
}
