#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n,b,a[200001];
pair<ll,ll>p[200001];
void solve(){
    long long m=0,s=0;
    for(int i=0;i<n;i++)cin>>p[i].first;
    for(int i=0;i<n;i++)cin>>p[i].second,m+=p[i].second;
    sort(p,p+n);
    for(int i=n-1;i>=0;i--){
        m=min(m,max(p[i].first,s));
        s+=p[i].second;
    }
    cout<<m<<endl;
}
int main(){
    for(cin>>t;t--;){
        cin>>n;
        solve();
    }
}