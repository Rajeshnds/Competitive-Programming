#include<bits/stdc++.h>
using namespace std;
int n,a[301],b[301];
vector<pair<int,int>>v;
void solve(){
    int j=0;
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]){
            int k=i+1;
            for(;b[k]!=a[i];k++);
            for(int l=k-1;l>=i;l--){
                v.push_back({l,l+1});
                swap(b[l],b[l+1]);
            }
        }
    }
    cout<<v.size()<<endl;
    for(auto i:v)cout<<i.first<<" "<<i.second<<endl;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    solve();
}