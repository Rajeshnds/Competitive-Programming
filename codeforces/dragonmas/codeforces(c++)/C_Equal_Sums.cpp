#include<bits/stdc++.h>
using namespace std;
int k,n,a[200001],s;
map<int,pair<int,int>>p;
void solve(){
    for(int i=1;i<=k;i++){
        cin>>n;
        s=0;
        for(int j=1;j<=n;j++)cin>>a[j],s+=a[j];
        for(int j=1;j<=n;j++){
            if(p.count(s-a[j])){
                cout<<"YES"<<endl<<i<<" "<<j<<endl
                <<p[s-a[j]].first<<" "
                <<p[s-a[j]].second;
                return;
            }
        }
        for(int j=1;j<=n;j++){
            p[s-a[j]].first=i;
            p[s-a[j]].second=j;
        }
    }
    cout<<"NO";
}
int main(){
    cin>>k;
    solve();
}