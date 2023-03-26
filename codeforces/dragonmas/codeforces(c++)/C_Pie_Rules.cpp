#include<bits/stdc++.h>
using namespace std;
int n,a[55];
void solve(){
    int r=1,k=0,l=0;
    for(int i=n;i>=1;i--){
        if(k>l)l+=a[i];
        else k+=a[i];
    }
    if(l>k)swap(k,l);
    cout<<l<<" "<<k;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    solve();
}