#include<bits/stdc++.h>
using namespace std;
int n,w,a,mx,mn,s;
void solve(){
    for(int i=1;i<=n;i++){
        cin>>a;
        s+=a;
        if(s>0)mx=max(mx,s);
        else mn=max(mn,abs(s));
    }
    if(mn>w-mx)cout<<0;
    else cout<<w-mx-mn+1;
}
int main(){
    cin>>n>>w;
    solve();
}