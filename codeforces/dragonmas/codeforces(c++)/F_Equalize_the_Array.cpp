#include<bits/stdc++.h>
using namespace std;
int t,n,a[200001];
void solve(){
    map<int,int>m1,m2;
    int a,ans=0;
    for(int i=0;i<n;i++){
        cin>>a;
        m1[a]++;
        m2[m1[a]]++;
        ans=max(ans,m1[a]*m2[m1[a]]);
    }
    cout<<n-ans;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}