#include<bits/stdc++.h>
using namespace std;
int t,n,a[200001],b[200001],c[200001],ans;
set<int>s;
void solve(){
    for(int i=1;i<=n;i++){
        if(c[i]==0){
            if(*s.begin()==i){
                int k=c[b[a[i]]];
                c[b[a[i]]]=i;
                c[i]=k;
            }
            else c[i]=*s.begin();
            s.erase(*s.begin());
        }
        else ans++;
    }
    cout<<ans<<endl;
    for(int i=1;i<=n;i++)cout<<c[i]<<" ";
} 
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        ans=0;
        s.clear();
        fill(b,b+n+1,0);
        fill(c,c+n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(b[a[i]]==0)c[i]=a[i],b[a[i]]=i;
        }
        for(int i=1;i<=n;i++)if(b[i]==0)s.insert(i);
        solve();
    }
}