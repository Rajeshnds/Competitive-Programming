#include<bits/stdc++.h>
using namespace std;
int n,d,a[101];
void read(){
    cin>>n>>d;
    for(int i=1;i<=n;i++)cin>>a[i];
}
void solve(){
    sort(a,a+n+1);
    int ans=0;
   for(int i=1;i<=n;i++){
       for(int j=i;j<=n;j++){
           if(a[j]-a[i]<=d)ans=max(ans,j-i+1);
       }
   }
   cout<<n-ans;
}
int main(){
    read();
    solve();
}
