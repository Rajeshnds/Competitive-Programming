#include<bits/stdc++.h>
using namespace std;
int n,a[200001],b[200001];
void solve(){
    int j=1;b[1]=0;
    for(int i=2;i<=n;i++){
        if(a[i]<a[i-1])j++;
        b[i]=b[j]+1;
    }
    cout<<b[n];
}
int main(){
    int t;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
    }
}