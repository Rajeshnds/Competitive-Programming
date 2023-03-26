#include<bits/stdc++.h>
using namespace std;
long long d,n;
void solve(){
    d=n*(n-1)*(n-2)*(n-3)*(n-4)/120*n*(n-1)*(n-2)*(n-3)*(n-4);
    cout<<d;
}
int main(){
    cin>>n;
    solve();
}