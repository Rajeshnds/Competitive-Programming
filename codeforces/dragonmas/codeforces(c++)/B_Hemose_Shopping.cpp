#include<bits/stdc++.h>
using namespace std;
int t,n,x,a[100001],d[100001];
void solve(){
    for(int i=1;i<=n;i++){
        if(a[i]!=d[i]){
            if(max(i-1,n-i)<x){
                cout<<"NO";return;
            }
        }
    }
    cout<<"YES";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>x;
        for(int i=1;i<=n;i++){
            cin>>d[i];
            a[i]=d[i];
        }
        sort(d+1,d+n+1);
        solve();
    }
}