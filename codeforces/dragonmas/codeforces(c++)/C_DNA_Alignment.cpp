#include<bits/stdc++.h>
using namespace std;
int n,a[26];
string s;
void solve(){
    long long k=1,m=1e9+7,ans=1;
    for(int i=25;a[i]==a[i-1];i--)k++;
    while(n--){
        ans=ans*k%m;
    }
    cout<<ans;
}
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        a[s[i]-'A']++;
    }
    sort(a,a+26);
    solve();
}