#include<bits/stdc++.h>
using namespace std;
int k,ans,l;
string s;
void solve(){
    for(char c:s){
        l++;
        k+=(c-'0');
        if(k%3==0||(c-'0')%3==0||l>=3){
            ans++;
            l=0;
            k=0;
        }
    }
    cout<<ans;
}
int main(){
    cin>>s;
    solve();
}