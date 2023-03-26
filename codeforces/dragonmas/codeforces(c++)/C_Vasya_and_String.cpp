#include<bits/stdc++.h>
using namespace std;
int n,k,ans,j,d,e;
string s;
void solve(){
    for(int i=0;i<n;i++){
        s[i]=='a'?d++:e++;
        if(min(d,e)<=k){
            ans=max(ans,d+e);
        }
        else{
            s[j++]=='a'?d--:e--;
        }
    }
    cout<<ans;
}
int main(){
    cin>>n>>k>>s;
    solve();
}