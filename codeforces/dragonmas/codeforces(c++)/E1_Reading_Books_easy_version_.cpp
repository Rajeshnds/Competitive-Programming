#include<bits/stdc++.h>
using namespace std;
int n,k;
priority_queue<int,vector<int>,greater<int>>pq1,pq2,pq3;
void solve(){
    int ans=0;
    while(!pq1.empty()&&!pq2.empty()){
        pq3.push(pq1.top()+pq2.top());
        pq1.pop();
        pq2.pop();
    }
    if(pq3.size()<k){cout<<-1;return;}
    for(int i=1;i<=k;i++){
        ans+=pq3.top(),pq3.pop();
    }
    cout<<ans;
}
int main(){
    int a,b,c;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        if(b&&c)pq3.push(a);
        else if(b)pq1.push(a);
        else if(c)pq2.push(a);
    }
    solve();
}