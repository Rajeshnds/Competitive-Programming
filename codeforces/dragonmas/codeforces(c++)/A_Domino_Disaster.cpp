#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
void solve(){
    for(int i=0;i<n;i++){
        if(s[i]=='U')cout<<'D';
        else if(s[i]=='D')cout<<'U';
        else cout<<s[i];
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}