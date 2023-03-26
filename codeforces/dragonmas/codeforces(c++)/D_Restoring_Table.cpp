#include<bits/stdc++.h>
using namespace std;
int n;
void solve(){
    for(int i=1;i<=n;i++){
        int ans=0;
        for(int j=1;j<=n;j++){
            int k;
            cin>>k;
            if(i!=j)ans|=k;
        }
        cout<<ans<<" ";
    }
}
int main(){
    cin>>n;
    solve();
}