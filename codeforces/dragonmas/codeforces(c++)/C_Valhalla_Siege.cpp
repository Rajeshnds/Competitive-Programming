#include<bits/stdc++.h>
using namespace std;
long long k,n,q,a[200001],s,f,x;
void solve(){
    for(int i=0;i<q;i++){
        cin>>x;
        s+=x;
        k=upper_bound(a,a+n,s)-a;
        if(k==n)k=s=0;
        cout<<n-k<<endl;
    }
}
int main(){
    cin>>n>>q;
    cin>>a[0];
    for(int i=1;i<n;i++)cin>>x,a[i]=a[i-1]+x;
    solve();
}