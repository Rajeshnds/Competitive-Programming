#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int n;
main(){
cin>>n;
soroban:
    string s="OO|OOOOO";
    int d=n%10;
    n/=10;
    s[d<5?1:0]='-';
    s[3+(d%5)]='-';
    cout<<s<<endl;
    if(n)goto soroban;
}
