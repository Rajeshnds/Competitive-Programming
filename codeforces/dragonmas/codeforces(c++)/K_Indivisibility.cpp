#include<bits/stdc++.h>
using namespace std;
long long n;
void solve(){
    cout<<n-n/2-n/3-n/5-n/7+n/(2*3)+n/(2*5)+n/(2*7)+n/(3*5)+
    n/(3*7)+n/(5*7)-n/(2*3*5)-n/(2*3*7)-n/(2*5*7)-n/(3*5*7)+
    n/(2*3*5*7);
}
int main(){
    cin>>n;
    solve();
}