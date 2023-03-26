#include<bits/stdc++.h>
using namespace std;
int a,b,c;
map<int,int>d;
void solve(){
    d[a]++;d[b]++;d[c]++;
    if(d[1]||d[2]/2||d[3]/3||(d[2]&&d[4]/2))cout<<"YES";
    else cout<<"NO";
}
int main(){
    cin>>a>>b>>c;
    solve();
}