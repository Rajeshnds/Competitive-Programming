#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int q,n;
string s,t,u;
void solve(){
    int ans=2e5;
    for(int i='a';i<='z';i++){
        int l=0,r=n-1,d=0,f=1;
        while(l<r){
            if(s[l]!=s[r]){
                if(s[l]==i)l++,d++;
                else if(s[r]==i)r--,d++;
                else f=0;
            }
            else l++,r--;
            if(!f)break;
        }
        if(f)ans=min(ans,d);
    }
    if(ans<2e5)cout<<ans;
    else cout<<-1;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>q;q--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}
