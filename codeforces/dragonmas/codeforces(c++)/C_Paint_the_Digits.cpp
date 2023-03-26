#include<bits/stdc++.h>
using namespace std;
int q,n;
string s,w;
void solve(){
    int j=0;
    string t=string(n,'0');
    for(int i=0;i<n;i++)if(s[i]==w[j])t[i]='1',j++;
    for(int i=0;i<n;i++)if(s[i]==w[j])t[i]='2',j++;
    cout<<(j==n?t:"-");
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n>>s;
        w=s;
        sort(w.begin(),w.end());
        solve();
    }
}