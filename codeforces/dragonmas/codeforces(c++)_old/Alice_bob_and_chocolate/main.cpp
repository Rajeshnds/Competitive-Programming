#include<bits/stdc++.h>
using namespace std;
int n,a[100001];
void read(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
}
void solve(){
    int s=0,t=0,k=n-1,l=0;
    for(int i=0;i<n;i++){
        if(s<=t && i<=k)s+=a[i];
        else if(t<s && i<=k)t+=a[k],k--,l++,i--;
    }
    cout<<n-l<<" "<<l;
}
int main(){
    read();
    solve();
}
