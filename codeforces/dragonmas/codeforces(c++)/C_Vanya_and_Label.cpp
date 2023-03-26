#include<bits/stdc++.h>
using namespace std;
int a[125],k;
long long d,ans=1,m=1e9+7;
string s;
void solve(){
    int j=0;
    for(int i='0';i<='9';i++)a[i]=j++;
    for(int i='A';i<='Z';i++)a[i]=j++;
    for(int i='a';i<='z';i++)a[i]=j++;
    a['-']=j++;
    a['_']=j++;
    for(int i=0;i<s.size();i++){
        k=6-__builtin_popcount(a[s[i]]);
        d=pow(3,k);
        ans=(ans*d%m);
    }
    cout<<ans;
}
int main(){
    cin>>s;
    solve();
}