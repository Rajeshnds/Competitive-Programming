#include<bits/stdc++.h>
using namespace std;
int n;
string s="abcd",t;
string lucky_string(int n){
    for(int i=0;i<n;i++)t+=s[i%4];
    return t;
}
int main(){
    cin>>n;cout<<lucky_string(n);
}
