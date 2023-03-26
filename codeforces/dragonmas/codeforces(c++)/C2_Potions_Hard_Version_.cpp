#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int>>pq;
int n;
void solve(){
    int a,ans=0;
    long long s=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        s+=a;
        pq.push(a);
        ans++;
        if(s<0)s-=pq.top(),pq.pop(),ans--;
    }
    cout<<ans;
}
int main(){
    cin>>n;
    solve();
}