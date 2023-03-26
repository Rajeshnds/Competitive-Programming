#include<bits/stdc++.h>
using namespace std;
int q,n;
string s,t;
void solve(){
    int ans=0;
    for(int i=0;i<n;i++){
        if(i==n-1){
            if(s[i]=='0'&&t[i]=='0')ans++;
            else if((s[i]=='0'&&t[i]=='1')||(s[i]=='1'&&t[i]=='0'))ans+=2;
        }
        else if((s[i]=='0'&&t[i]=='1')||(s[i]=='1'&&t[i]=='0'))ans+=2;
        else if((s[i+1]=='0'&&t[i+1]=='1')||(s[i+1]=='1'&&t[i+1]=='0')){
            ans+=2;
            if(s[i]=='0'&&t[i]=='0')ans++;
            i++;
        }
        else if((s[i]=='0'&&t[i]=='0')&&(s[i+1]=='0'&&t[i+1]=='0'))ans++;
        else if((s[i]=='0'&&t[i]=='0')&&(s[i+1]=='1'&&t[i+1]=='1'))ans+=2,i++;
        else if((s[i]=='1'&&t[i]=='1')&&(s[i+1]=='0'&&t[i+1]=='0'))ans+=2,i++;
    }
    cout<<ans;
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n>>s>>t;
        solve();
    }
}