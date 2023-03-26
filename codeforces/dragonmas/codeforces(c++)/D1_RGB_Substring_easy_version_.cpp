#include<bits/stdc++.h>
using namespace std;
int q,n,k;
string s,t="RGB";
void solve(){
    int d,ans=INT_MAX;
    for(int i=0;i<=n-k;i++){
        for(int l=0;l<3;l++){
            d=0;
            for(int j=i;j<i+k;j++){
                if(s[j]!=t[(l+j)%3])d++;
            }
            ans=min(ans,d);
        }
    }
    cout<<ans;
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n>>k>>s;
        solve();
    }
}