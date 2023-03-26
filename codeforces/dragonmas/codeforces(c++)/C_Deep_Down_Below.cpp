#include<bits/stdc++.h>
using namespace std;
int t,n,k[100001];
pair<int,int>p[100001];
void solve(){
    int ans=0,q=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,p[i].first-q);
        q+=k[p[i].second];
    }
    cout<<ans+1;
}
int main(){
    int a,d;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>k[i];
            int m=0;
            for(int j=0;j<k[i];j++){
                cin>>a;
                a-=j;
                m=max(m,a);
            }
            p[i]={m,i};
        }
        sort(p+1,p+n+1);
        solve();
    }
}