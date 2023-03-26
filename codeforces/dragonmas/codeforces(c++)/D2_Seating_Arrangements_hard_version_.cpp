#include<bits/stdc++.h>
using namespace std;
int t,n,m;
vector<pair<int,int>>v;
void solve(){
    int ans=0;
    for(int i=0;i<n*m;i+=m){
        for(int j=i;j<i+m;j++){
            for(int k=i;k<i+m;k++){
                if(v[k].first<v[j].first&&v[k].second<v[j].second)ans++;
            }
        }
    }
    cout<<ans;
}
int main(){
    int a;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        v.clear();
        for(int i=0;i<n*m;i++){
            cin>>a;
            v.push_back({a,i});
        }
        sort(v.begin(),v.end());
        solve();
    }
}