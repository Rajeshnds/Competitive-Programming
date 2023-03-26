#include<bits/stdc++.h>
using namespace std;
int n,b,a,s;
void solve(){
    int d=a;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(s&&b&&d<a)b--,d++;
        else if(d)d--;
        else if(b)b--;
        else{cout<<i-1;return;}
    }
    cout<<n;
}   
int main(){
    cin>>n>>b>>a;
    solve();
}