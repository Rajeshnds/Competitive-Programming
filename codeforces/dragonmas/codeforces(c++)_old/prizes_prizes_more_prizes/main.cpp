#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,p[51],a[6],m[6];
void read(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>p[i];
    for(int i=1;i<=5;i++)cin>>a[i];
}
void solve(){
    ll s=0;
    for(int i=1;i<=n;i++){
        s+=p[i];
        for(int j=5;j>=1;j--){
            m[j]+=(s/a[j]);
            s=s%a[j];
        }
    }
    for(int i=1;i<=5;i++)cout<<m[i]<<" ";
    cout<<endl<<s;
}
int main(){
    read();
    solve();
}
