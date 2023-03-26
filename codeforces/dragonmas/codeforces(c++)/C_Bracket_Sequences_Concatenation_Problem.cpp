#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[300001],b[300001],c[300001];
string s;
void solve(){
    ll ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==c[i])ans+=b[-a[i]];
    }
    cout<<ans;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int k=0,l=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='(')a[i]++;
            else a[i]--;
            if(a[i]<c[i])c[i]=a[i];
        }
        if(c[i]==0)b[a[i]]++;
    }
    solve();
}