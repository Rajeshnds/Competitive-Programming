#include<bits/stdc++.h>
using namespace std;
int n,q,m;
map<int,int>mp;
void solve(){
    int s,ans,k;
    while(q--){
        cin>>s;
        ans=0;
        for(int i=m;i>=1;i/=2){
            if(mp[i]){
                k=min(mp[i],s/i);
                ans+=k;
                s-=(k*i);
            }
        }
        cout<<(s?-1:ans)<<endl;
    }
}
int main(){
    int a;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a;
        m=max(m,a);
        mp[a]++;
    }
    solve();
}