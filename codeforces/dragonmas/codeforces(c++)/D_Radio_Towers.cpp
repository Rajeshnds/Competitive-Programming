#include<bits/stdc++.h>
using namespace std;
int n,m=998244353;
long long a,b,c;
void solve(){
    for(int i=1;i<=n;i++)b=(b*(m+1)/2)%m;
    cout<<b;
}
int main(){
    cin>>n;
    a=0;b=1;
    for(int i=1;i<n;i++)c=a+b,a=b,b=c%m;
    solve();
}