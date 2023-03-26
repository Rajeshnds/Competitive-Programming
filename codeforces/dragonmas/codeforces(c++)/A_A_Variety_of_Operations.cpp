#include<bits/stdc++.h>
using namespace std;
int n,a,b;
void solve(){
    if((a+b)%2==1)cout<<-1;
    else if(a==b&&a==0)cout<<0;
    else if(a==b)cout<<1;
    else cout<<2;
}
int main(){
    for(cin>>n;n--;cout<<endl){
        cin>>a>>b;
        solve();
    }
}