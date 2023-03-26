#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,s,a,d,m=2e9;
void read(){
    cin>>n>>s;
    for(int i=0;i<n;i++)cin>>a,d+=a,m=min(m,a);
}
int solve(){
    if(d<s)return -1;
    if(d-m*n<s)return (d-s)/n;
    return m;
}
int main(){
    read();
    cout<<solve();
}
