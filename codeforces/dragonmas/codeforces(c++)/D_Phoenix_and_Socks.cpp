#include<bits/stdc++.h>
using namespace std;
int t,n,l,r,a[200001],b[200001];
void solve(){
    int k=0,d=0,m=0,f,g,h;
    for(int i=1;i<=n;i++){
        h=min(a[i],b[i]),a[i]-=h,b[i]-=h;
        k+=h;
        if(a[i]%2)d++;
        if(b[i]%2)m++;
    }
    if(r>l)swap(r,l),swap(d,m);
    f=r-k;
    g=max(0,d-f);
    cout<<f+g/2+(l-r)/2;
}
int main(){
    int x;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>l>>r;
        fill(a,a+n+1,0);
        fill(b,b+n+1,0);
        for(int i=1;i<=l;i++)cin>>x,a[x]++;
        for(int i=1;i<=r;i++)cin>>x,b[x]++;
        solve();
    }
}