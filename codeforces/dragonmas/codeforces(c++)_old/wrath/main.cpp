#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000001],l;
void read(){
  cin>>n;
  for(int i=1;i<=n;i++)cin>>a[i];
}
void solve(){
   int ans=1;
   for(int i=n;i>=1;i--){
       if(n>i)ans++;
       n=min(n,i-a[i]);
   }
   cout<<ans;
}
int main(){
    read();
    solve();
}
