#include<bits/stdc++.h>
using namespace std;
int n,k,a[200],j,ans;
string s;
void solve(){
    for(int i=0;i<n;i++){
        a[s[i]]++;
        k=a[s[i]];
        while(a[s[j]]>1)a[s[j++]]--;
        if(k==1)ans=i-j+1;
        else ans=min(ans,i-j+1);
    }
    cout<<ans;
}
int main(){
    cin>>n>>s;
    solve();
}