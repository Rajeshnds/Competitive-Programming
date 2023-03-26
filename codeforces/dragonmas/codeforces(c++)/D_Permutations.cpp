#include<bits/stdc++.h>
using namespace std;
priority_queue<int>q[100001];
int a[100001],b[100001],n,m;
void solve(){
    for(int i=1;i<=m;i++){
       if(q[i].size()!=q[i].top()){cout<<-1;return;}
   }
   cout<<m<<endl;
   for(int i=1;i<=n;i++)cout<<b[i]<<" ";
}
int main(){
   int x;
   cin>>n;
   for(int i=1;i<=n;i++){
       cin>>x;
       a[x]++;
       b[i]=a[x];
       q[a[x]].push(x);
       m=max(m,a[x]);
   }
   solve();
}