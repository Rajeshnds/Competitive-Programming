#include<bits/stdc++.h>
using namespace std;
int n,t[101],a[101];
void solve(){
    int k=0,r=0;
    for(int i=1;i<=n;i++){
        if(t[a[i]]==1)k++;
        if(t[a[i]]>2)r=1;
    }
    if((k&1)&&!r){cout<<"NO";return;}
    if(k%2==0)r=0;
    cout<<"YES"<<endl;
    k=1;
    for(int i=1;i<=n;i++){
        if(t[a[i]]==1&&k)cout<<"A",k=0;
        else if(t[a[i]]==1&&!k)cout<<"B",k=1;
        else if(t[a[i]]>2&&r)cout<<"B",r=0;
        else cout<<"A";
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],t[a[i]]++;
    solve();
}