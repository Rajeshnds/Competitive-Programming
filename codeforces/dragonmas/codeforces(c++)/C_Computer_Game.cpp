#include<bits/stdc++.h>
using namespace std;
long long q,k,n,a,b;
int solve(){
    cin>>k>>n>>a>>b;
    return (k-1)/b<n?-1:min(n,(k-1-n*b)/(a-b));
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cout<<solve();
    }
}