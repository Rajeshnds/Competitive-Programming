#include<bits/stdc++.h>
using namespace std;
# define ll  long long
int n;
string s;
map<ll,ll>m;
long long ans,d;
void solve(){
    for(int i=0;i<26;i++){
        ans+=m[d^(1<<i)];
    }
    m[d]++;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        int a[26]={0};d=0;  
        for(int j=0;j<s.size();j++){
            a[s[j]-'a']++;
        }
        for(int j=0;j<26;j++){
            if(a[j]&1)d+=(1<<j);
        }
        ans+=m[d];
        solve();
    }
    cout<<ans;
}