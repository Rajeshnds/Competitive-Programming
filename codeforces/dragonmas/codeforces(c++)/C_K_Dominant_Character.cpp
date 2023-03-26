#include<bits/stdc++.h>
using namespace std;
string s;
int k,m,ans=INT_MAX;
void solve(){
    for(int i=97;i<=122;i++){
        k=1;m=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==i)k=1;
            else k++;
            m=max(m,k);
        }
        ans=min(ans,m);
    }
    cout<<ans;
}
int main(){
    cin>>s;
    solve();
}