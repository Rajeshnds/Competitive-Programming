#include<bits/stdc++.h>
using namespace std;
int n,x,s,a;
string encoding(){
    cin>>n>>x;
    for(int i=0;i<n;i++)cin>>a,s+=a;
    return s+n-1==x?"YES":"NO";
}
int main(){
    cout<<encoding();
}
