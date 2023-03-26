#include<bits/stdc++.h>
using namespace std;
int k,ans;
string s;
void solve(){
    for(auto c:s){
        if(c>='a'&&c<='z')k++;
        else ans=min(ans+1,k);
    }
    cout<<ans;
}
int main(){
    cin>>s;
    solve();
}