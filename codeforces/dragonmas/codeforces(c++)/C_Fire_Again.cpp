#include<bits/stdc++.h>
using namespace std;
int n,m,k;
set<pair<int,int>>s;
void solve(){
    int d,ans=0,x=1,y=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            d=1e7;
            for(auto a:s){
                d=min(d,abs(a.first-i)+abs(a.second-j));
            }
            if(d>ans)x=i,y=j,ans=d;
        }
    }
    cout<<x<<" "<<y;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int b,c;
    cin>>n>>m>>k;
    for(int i=1;i<=k;i++)cin>>b>>c,s.insert({b,c});
    solve();
}