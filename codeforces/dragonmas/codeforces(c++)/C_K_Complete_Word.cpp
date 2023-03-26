#include<bits/stdc++.h>
using namespace std;
int t,n,k;
string s;
void solve(){
    map<char,int>m[k];
    for(int i=0;i<n;i++){
        int d=min(i%k,k-1-(i%k));
        m[d][s[i]]++;
    }
    int ans=0;
    for(int i=0;i<k;i++){
        int mx=0,l=0;
        for(auto j:m[i]){
            mx=max(mx,j.second);
            l+=j.second;
        }
        ans+=l-mx;
    }
    cout<<ans<<endl;
}
int main(){
    for(cin>>t;t--;){
        cin>>n>>k>>s;
        solve();
    }
}