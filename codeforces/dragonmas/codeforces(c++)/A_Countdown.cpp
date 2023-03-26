#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
void solve(){
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]!='0'){
            ans++;
            ans+=int(s[i]-'0');
        }
    }
    if(s[n-1]!='0')ans--;
    cout<<ans;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}