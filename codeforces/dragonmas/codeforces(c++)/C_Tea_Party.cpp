#include<bits/stdc++.h>
using namespace std;
int n,w,a,b[101];
vector<pair<int,int>>v;
void solve(){
    if(w<0){cout<<-1;return;}
    for(int i=0;i<n;i++){
        int d=min(w,v[i].first-b[v[i].second]);
        b[v[i].second]+=d;
        w-=d;
    }
    if(w)cout<<-1;
    else for(int i=0;i<n;i++)cout<<b[i]<<" ";
}
int main(){
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>a;
        b[i]=(a+1)/2;
        w-=b[i];
        v.push_back({a,i});
    }
    sort(v.rbegin(),v.rend());
    solve();
}