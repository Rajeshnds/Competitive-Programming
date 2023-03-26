#include<bits/stdc++.h>
using namespace std;
long long t,a,b,k;
void solve(){
    if(a==b)cout<<0<<" "<<0;
    else{
        k=abs(a-b);
        cout<<k<<" ";
        cout<<min(k-a%k,a%k);
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        solve();
    }
}