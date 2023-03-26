#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],b[1001],s,f=1;
void solve(){
    while(f){
        for(int i=1;i<=n;i++){
            if(b[i]>=a[i])b[i]-=a[i];
            else if(b[i]+k>=a[i])k-=(a[i]-b[i]),b[i]=0;
            else f=0;
        }
        if(f)s++;
    }
    cout<<s;
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    solve();
}