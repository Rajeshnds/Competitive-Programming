#include<bits/stdc++.h>
using namespace std;
int n,a[200001],b[200001],m;
void solve(){
    int x;
    for(int i=2;i<=n;i++){
        cin>>x;
        a[i]=x+a[i-1];
        m=min(m,a[i]);
    }
    m=1-m;
    for(int i=1;i<=n;i++){
        a[i]+=m;
        if(a[i]<1||a[i]>n||b[a[i]]){cout<<-1;return;}
        b[a[i]]=1;
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    cin>>n;
    solve();
}