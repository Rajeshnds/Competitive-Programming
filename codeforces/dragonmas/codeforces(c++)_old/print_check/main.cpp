#include<bits/stdc++.h>
using namespace std;
int n,m,k,r[5001],c[5001],a[100001];
void read(){
    int f,g;
    cin>>n>>m>>k;
    for(int i=1;i<=k;i++){
        cin>>f>>g>>a[i];
        if(f==1)r[g]=i;
        else c[g]=i;
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[max(r[i],c[j])]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    read();
    solve();
}
