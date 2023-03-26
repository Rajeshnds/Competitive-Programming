#include<bits/stdc++.h>
using namespace std;
int n,k,a[100001];
void read(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
}
void solve(){
    int i=0;
   for(i=n;i>=1;i--){
       if(a[i]!=a[k])break;
   }
   cout<<(i>=k?-1:i);
}
int main(){
    read();
    solve();
}
