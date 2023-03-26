#include<bits/stdc++.h>
using namespace std;
long long n,m,q,k[3]={0};
void solve(){
    long long a,b,x,y;
    cin>>a>>b>>x>>y;
    if((b-1)/k[a]==(y-1)/k[x])cout<<"YES";
    else cout<<"NO";
}
int main(){
    cin>>n>>m>>q;
    k[1]=n/__gcd(n,m);
    k[2]=m/__gcd(n,m);
    while(q--){
        solve();
        cout<<endl;
    }
}