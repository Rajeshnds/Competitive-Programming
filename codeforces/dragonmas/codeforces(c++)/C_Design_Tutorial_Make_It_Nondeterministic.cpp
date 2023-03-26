#include<bits/stdc++.h>
using namespace std;
int n,p;
string s[100001],t[100001],m,mi,ma;
void solve(){
    for(int i=2;i<=n;i++){
        cin>>p;
        mi=min(s[p],t[p]);
        ma=max(s[p],t[p]);
        if(m<mi)m=mi;
        else if(m<ma)m=ma;
        else {cout<<"NO";return;}
    }
    cout<<"YES";
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>s[i]>>t[i];
    cin>>p;
    m=min(s[p],t[p]);
    solve();
}