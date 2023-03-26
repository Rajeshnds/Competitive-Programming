#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,t,s,j,i,k,d,e;
void solve(){
    for(int i=max(t-m,4ll);i<=min(t-1,n);i++){
        k=1;s=1;
        for(j=n;j>i;j--)s=s*j/k++;
        k=1;d=1;
        for(int l=m;l>t-i;l--)d=d*l/k++;
        e+=(d*s);
    }
    cout<<e;
}
int main(){
    cin>>n>>m>>t;
    solve();
}