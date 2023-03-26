#include<bits/stdc++.h>
using namespace std;
int n,t;
string s;
void solve(){
    map<pair<int,int>,int>m;
    int d=0,k=0,g;
    for(int i=0;i<n;i++){
        s[i]=='D'?d++:k++;
        g=__gcd(d,k);
        cout<<++m[{d/g,k/g}]<<" ";
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}