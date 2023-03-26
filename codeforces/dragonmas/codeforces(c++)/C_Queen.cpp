#include<bits/stdc++.h>
using namespace std;
int n,a[1000001];
bool ok=true;
void solve(){
    int x,y;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        if(y==0){
            a[i]=1;
            if(x!=-1)a[x]=1;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=1)cout<<i<<" ",ok=false;
    }
    if(ok)cout<<-1;
}
int main(){
    cin>>n;
    solve();
}