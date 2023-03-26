#include<bits/stdc++.h>
using namespace std;
int t,n,k[100001];
vector<int>v[100001];
pair<int,int>p[100001];
void solve(){
    int q=p[1].first+1,ans=q;
    for(int i=2;i<=n;i++){
        q+=k[p[i-1].second];
        if(p[i].first>=q)q=p[i].first+1,ans=q;
    }
    cout<<ans;
}
int main(){
    int a,d;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>k[i];
            int ma=0;
            v[i].clear();
            for(int j=0;j<k[i];j++){
                cin>>a;
                a-=j;
                ma=max(ma,a);
                v[i].push_back(a);
            }
            p[i]={ma,i};
        }
        sort(p+1,p+n+1);
        solve();
    }
}