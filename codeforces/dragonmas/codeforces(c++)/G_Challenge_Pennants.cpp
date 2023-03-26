#include<bits/stdc++.h>
using namespace std;
long long n;
void solve(){
    cout<<((n+4)*(n+3)*(n+2)*(n+1)*n/120)*((n+2)*(n+1)*n/6);
}
int main(){
    cin>>n;
    solve();
}