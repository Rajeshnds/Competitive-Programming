#include<bits/stdc++.h>
using namespace std;
long long ans=1;
int n,m,p=1e9+7,a[101],b[101][91];
string s;
void solve(){
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            if(b[j][s[j]]==0)b[j][s[j]]=1,a[j]++;
        }
    }
    for(int i=0;i<m;i++)ans=(ans*a[i])%p;
    cout<<ans;
}
int main(){
    cin>>n>>m;
    solve();
}