#include<bits/stdc++.h>
using namespace std;
int n,k,a[100001],g;
multiset<int>s;
void solve(){
    int b;
    long long ans=0;
    for(int i=1;i<=n;i++){
        cin>>b;
        s.insert(b);
        if(a[i]>k){
            while(!s.empty()&&a[i]>k)ans+=*s.begin(),k+=g,s.erase(*s.begin());
            if(a[i]>k){cout<<-1;return;}
        }
    }
    cout<<ans;
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>g;
    solve();
}