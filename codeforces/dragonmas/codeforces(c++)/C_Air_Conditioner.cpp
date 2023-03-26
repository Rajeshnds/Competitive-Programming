#include<bits/stdc++.h>
using namespace std;
int q,n,m;
void solve(){
    int mx=m,mn=m,d=0,t,l,r,f=1,e;
    for(int i=0;i<n;i++){
        cin>>t>>l>>r;
        e=t-d;
        d=t;
        mx=mx+e;
        mn=mn-e;
        if(l>mx||r<mn)f=0;;
        if(mx>r)mx=r;
        if(mn<l)mn=l;
    }
    cout<<(f?"YES":"NO");
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n>>m;
        solve();
    }
}