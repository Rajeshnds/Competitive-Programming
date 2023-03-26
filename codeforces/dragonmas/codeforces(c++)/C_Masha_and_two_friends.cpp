#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,m,x1,x2,y11,y2,x3,y3,x4,y4;
ll white(ll a,ll b,ll c,ll d){
    ll k=(c-a+1)*(d-b+1);
    ll l=((a+b)%2==0)&&((c+d)%2==0);
    return (k+l)/2;
}
ll black(ll a,ll b,ll c,ll d){
    ll k=(c-a+1)*(d-b+1)-white(a,b,c,d);
    return k;
}
void solve(){
    ll w=0,b=0,d;
    w=(m*n+1)/2;
    b=(m*n)-w;

    d=black(x1,y11,x2,y2);
    w+=d;
    b-=d;

    d=white(x3,y3,x4,y4);
    b+=d;
    w-=d;

    ll max_x=max(x1,x3);
    ll max_y=max(y11,y3);
    ll min_x=min(x2,x4);
    ll min_y=min(y2,y4);
    if(max_x<=min_x&&max_y<=min_y){
        d=black(max_x,max_y,min_x,min_y);
        b+=d;
        w-=d;
    }
    cout<<w<<" "<<b;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        cin>>x1>>y11>>x2>>y2;
        cin>>x3>>y3>>x4>>y4;
        solve();
    }
}