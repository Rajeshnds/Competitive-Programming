#include<bits/stdc++.h>
using namespace std;
int n,a,m;
void read(){
    cin>>n;
    map<int,int>ma;
    for(int i=0;i<n;i++)cin>>a,m=max(m,++ma[a]);
}
void solve(){
    cout<<m;
}
int main(){
    read();
    solve();
}
