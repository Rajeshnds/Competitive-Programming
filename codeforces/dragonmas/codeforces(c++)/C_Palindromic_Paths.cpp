#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[61],b[61];
void solve(){
    int ans=0;
    for(int i=0,j=n+m-2;i<j;i++,j--){
        ans+=min(a[i]+a[j],b[i]+b[j]);
    }
    cout<<ans;
}
int main(){
    int x;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        fill(a,a+n+m,0);
        fill(b,b+n+m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>x;
                if(x)a[i+j]++;
                else b[i+j]++;
            }
        }
        solve();
    
    }
}