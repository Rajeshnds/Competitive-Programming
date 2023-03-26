#include<bits/stdc++.h>
using namespace std;
int n,l,r,a[100001];
void solve(){
    int b;
    for(int i=1;i<=n;i++){
        cin>>b;
        if((i<l||i>r)&&a[i]!=b){cout<<"LIE";return;}
    }
    cout<<"TRUTH";
}
int main(){
    cin>>n>>l>>r;
    for(int i=1;i<=n;i++)cin>>a[i];
    solve();
}