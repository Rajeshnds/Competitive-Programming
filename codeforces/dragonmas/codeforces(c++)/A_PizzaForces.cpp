#include<bits/stdc++.h>
using namespace std;
long long n;
int t;
void solve(){
    n=max(n,1ll*6);
    n+=(n%2);
    cout<<n/2*5<<endl;
}   
int main(){
    for(cin>>t;t--;){
        cin>>n;
        solve();
    }
}