#include<bits/stdc++.h>
using namespace std;
long long b,d,s,k;
void read(){
    cin>>b>>d>>s;
}
void solve(){
    long long a=max(b,max(d,s))-1;
    cout<<max(k,a-d)+max(k,a-s)+max(k,a-b);
}
int main(){
    read();
    solve();
}
