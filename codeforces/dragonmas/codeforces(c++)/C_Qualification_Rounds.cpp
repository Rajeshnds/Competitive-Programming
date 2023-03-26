#include<bits/stdc++.h>
using namespace std;
int n,k,a[17],b[5];
void solve(){
    for(int i=0;i<=(1<<k);i++){
        for(int j=0;j<=(1<<k);j++){
            if(!(i&j)&&a[i]&&a[j]){cout<<"YES";return;}
        }
    }
    cout<<"NO";
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=0;j<k;j++){
            cin>>b[j];
        }
        a[b[0]+b[1]*2+b[2]*4+b[3]*8]=1;
    }
    solve();
}