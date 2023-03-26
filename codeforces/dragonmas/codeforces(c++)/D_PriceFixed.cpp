#include<bits/stdc++.h>
using namespace std;
#define ll long long 
pair<ll,ll>p[100001];
int n;
void solve(){
    ll s=0,ans=0;
    int i=1;
    while(i<=n){
        if(s+p[i].second>=-p[n].first){
            ll k=-p[n].first-s;
            p[i].second-=k;
            ans+=k*2;
            s+=k;
            while(i<=n&&s>=-p[n].first){
                ans+=p[n].second;
                s+=p[n].second;
                n--;
            }
        }
        else s+=p[i].second,ans+=2*p[i].second,i++;
    }
    cout<<ans;
}
int main(){
    ll b;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p[i].second>>b;
        p[i].first=-b;
    }
    sort(p+1,p+n+1);
    solve();
}