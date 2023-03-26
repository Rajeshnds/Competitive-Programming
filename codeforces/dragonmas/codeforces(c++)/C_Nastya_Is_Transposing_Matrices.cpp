#include<bits/stdc++.h>
using namespace std;
map<int,multiset<int>>mp1,mp2;
int n,m,a;
void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a;
            mp2[i+j].insert(a);
        }
    }
    cout<<(mp1==mp2?"YES":"NO");
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a;
            mp1[i+j].insert(a);
        }
    }
    solve();
}