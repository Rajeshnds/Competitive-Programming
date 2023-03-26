#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,l=0,m=0,d=0;
    string s,t;
    cin>>n>>k>>s>>t;
    for(int c='a';c<'z';c++){
        l=0;m=0;
        for(int i=0;i<n;i++)m+=(s[i]==c),l+=(t[i]==c);
        if(m-d<l||(l-m)%k){cout<<"No";return;}
        d+=l-m;
    }
    cout<<"Yes";
}
int main(){
    int t;
    for(cin>>t;t--;cout<<endl)solve();
}