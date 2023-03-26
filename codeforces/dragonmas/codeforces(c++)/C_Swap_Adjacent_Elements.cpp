#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001];
string s;
void solve(){
    for(int i=1;i<=n;i++){
        m=max(m,a[i]);
        if(m>i&&s[i-1]=='0'){cout<<"NO";return;}
    }
    cout<<"YES";
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>s;
    solve();
}