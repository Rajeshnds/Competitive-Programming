#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[200001],x,s,k;
multiset<ll> m;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        m.insert(a[i]);
        s+=a[i];
    }
    for(int i=1;i<=n;i++){
        x=a[i];
        m.erase(m.find(x));
        if(m.find((s-x)%2?-1:(s-x)/2)!=m.end()?k++,a[i]=0:0);
        m.insert(x);
    }
    cout<<k<<endl;
    for(int i=1;i<=n;i++)if(a[i]==0)cout<<i<<" ";
}
