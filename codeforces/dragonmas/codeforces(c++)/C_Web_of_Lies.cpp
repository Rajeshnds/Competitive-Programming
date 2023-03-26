#include<bits/stdc++.h>
using namespace std;
int n,m,s,a[200001];
void solve(){
    int u,v,t;
    for(int i=1;i<=m;i++){
        cin>>t;
        if(t==3)cout<<s<<endl;
        else{
            cin>>u>>v;
            if(u>v)swap(u,v);
            if(t==1){
                if(a[u]==0)s--;
                a[u]++;
            }
            else{
                if(a[u]==1)s++;
                a[u]--;
            }
        }
    }
}
int main(){
    int u,v;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        a[min(u,v)]++;
    }
    for(int i=1;i<=n;i++)if(a[i]==0)s++;
    cin>>m;
    solve();
}