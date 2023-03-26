#include<bits/stdc++.h>
using namespace std;
int t,n;
void solve(){
    int a,b,c,d,x,y;
    int minx=-1e5,maxy=1e5,maxx=1e5,miny=-1e5;
    for(int i=1;i<=n;i++){
        cin>>x>>y>>a>>b>>c>>d;
        if(a==0)minx=max(minx,x);
        if(b==0)maxy=min(maxy,y);
        if(c==0)maxx=min(maxx,x);
        if(d==0)miny=max(miny,y);
    }
    if(maxy>=miny&&maxx>=minx)cout<<1<<" "
    <<maxx<<" "<<maxy;
    else cout<<0;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}