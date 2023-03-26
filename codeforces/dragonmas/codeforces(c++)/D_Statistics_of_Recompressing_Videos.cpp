#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
vector<ll>v;
priority_queue<ll,vector<ll>,greater<ll>>q;
void solve(){
    ll a,b;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        if(k){
            q.push(a+b);
            v.push_back(a+b);
            k--;
        }
        else{
            ll d=q.top();
            q.pop();
            q.push(max(a,d)+b);
            v.push_back(max(a,d)+b);
        }
    }
    for(auto i:v)cout<<i<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    solve();
}