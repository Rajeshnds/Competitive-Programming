#include<bits/stdc++.h>
using namespace std;
int t,n,a[200001],b[200001];
pair<int,int>p[200001];
void solve(){
    long long s=0;
    int d=0;
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(s<b[i])d=i;
        s+=b[i];
    }
    cout<<n-d<<endl;
    for(int i=0;i<n;i++)if(a[i]>=b[d])cout<<i+1<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i],b[i]=a[i];
        solve();
    }
}