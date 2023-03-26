#include<bits/stdc++.h>
using namespace std;
int t,n;
void solve(){
    vector<pair<int,int>>v;
    int a[200001]={0},b;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b;
        v.push_back({a[i],b});
    }
    sort(v.begin(),v.end());
    int m=0,k=0;
    for(int i=0;i<n-1;i++){
        m=max(m,v[i].second);
        if(m<v[i+1].first){
            k=v[i].first;
            break;
        }
    }
    if(!k)cout<<-1;
    else{
        for(int i=0;i<n;i++){
            if(a[i]<=k)cout<<1<<" ";
            else cout<<2<<" ";
        }
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}