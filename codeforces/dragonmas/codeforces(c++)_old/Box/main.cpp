#include<bits/stdc++.h>
using namespace std;
int t,n,a[100001];
void read(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
}
void solve(){
   int ans[n+1],f=1;
   for(int i=1;i<=n;i++)ans[i]=i;
   for(int i=1;i<=n;i++){
       if(a[i]<i)f=0;
       if(a[i]>i)swap(ans[a[i]],ans[i]);
   }
   if(f==0)cout<<-1;
   else{
       for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
   }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        read();
        solve();
    }
}
