#include<bits/stdc++.h>
using namespace std;
long long k,s,t,n,a[200001];
void solve(){
    s=0,k=2;
    for(int i=1;i<=n;i++){
        while(a[k]-a[i]<=2&&k<=n)k++;
        k--;
        s+=(k-i)*(k-i-1)/2;
    }
    cout<<s;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        solve();
    }
}