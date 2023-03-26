#include<bits/stdc++.h>
using namespace std;
int ans;
string s,t;
int divide(string u,int a){
    for(int i=0;i<u.size();i++){
        if(u[i]!=s[i%a])return 0;
    }
    return 1;
}
void solve(){
    int k=min(int(s.size()),int(t.size()));
    for(int i=1;i<=k;i++){
        if(s.size()%i==0&&t.size()%i==0){
            ans+=(divide(s,i)&divide(t,i));
        }
    }
    cout<<ans;
}
int main(){
    cin>>s>>t;
    solve();
}