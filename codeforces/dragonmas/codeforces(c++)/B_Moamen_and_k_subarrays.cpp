#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[100001];
pair<int,int>p[100001];
void solve(){
    for(int i=0;i<n-1;i++){
        if(p[i].second+1!=p[i+1].second)k--;
    }
    cout<<(k>0?"YES":"NO");
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>p[i].first,p[i].second=i;
        sort(p,p+n);
        solve();
    }
}