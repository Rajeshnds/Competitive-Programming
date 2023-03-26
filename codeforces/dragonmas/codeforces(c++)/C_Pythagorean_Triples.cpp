#include<bits/stdc++.h>
using namespace std;
long long n;
void solve(){
    if(n<3)cout<<-1;
    else{
        n*=n;
        if(n%2)cout<<n/2<<" "<<n/2+1;
        else cout<<n/4-1<<" "<<n/4+1;
    }
}
int main(){
    cin>>n;
    solve();
}