#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[200001];
void solve(){
    queue<int>q;
    int ans=0;
    for(int i=1;i<=n;i++){
        while(!q.empty()&&q.front()<=a[i]-m)q.pop();
        if(q.size()==k-1)ans++;
        else q.push(a[i]);
    }
    cout<<ans;
}
int main(){
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    solve();
}
