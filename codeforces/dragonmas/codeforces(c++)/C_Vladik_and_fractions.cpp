#include<bits/stdc++.h>
using namespace std;
int n;
void solve(){
    if(n==1)cout<<-1;
    else cout<<n<<" "<<n+1<<" "<<n*(n+1);
}
int main(){
    cin>>n;
    solve();
}