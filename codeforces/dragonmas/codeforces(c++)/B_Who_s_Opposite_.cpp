#include<bits/stdc++.h>
using namespace std;
int t,a,b,c;
void solve(){
    int k=abs(a-b);
    if(max(a,b)>k*2)cout<<-1;
    else if(c==a)cout<<b;
    else if(c==b)cout<<a;
    else if(c+k!=a&&c+k!=b&&c+k<=2*k)cout<<c+k;
    else if(c<=2*k&&c-k>=1&&c-k!=a&&c-k!=b)cout<<c-k;
    else cout<<-1;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b>>c;
        solve();
    }
}