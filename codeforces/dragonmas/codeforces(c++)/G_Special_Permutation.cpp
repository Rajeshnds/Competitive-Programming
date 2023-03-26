#include<bits/stdc++.h>
using namespace std;
int t,n;
void solve(){
    for(int i=n-(n%2==0);i>=1;i-=2)cout<<i<<" ";
    cout<<4<<" "<<2<<" ";
    for(int i=6;i<=n;i+=2)cout<<i<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        if(n<4)cout<<-1;
        else solve();
    }
}