#include<bits/stdc++.h>
using namespace std;
long long u,v;
void solve(){
    long long x=(v-u)/2;
    if((v-u)%2||u>v)cout<<-1;
    else if(u==v&&u==0)cout<<0;
    else if(u==v)cout<<1<<endl<<u;
    else if(u&x)cout<<3<<endl<<x<<" "<<x<<" "<<u;
    else cout<<2<<endl<<x<<" "<<u+x;
}
int main(){
    cin>>u>>v;
    solve();
}