#include<bits/stdc++.h>
using namespace std;
char c1[101],c2[101];
void solve(){
    int k=0,ans=0,r=0;
    for(int i=0;i<strlen(c1);i++){
        k=(c1[i]=='0')+(c2[i]=='0');
        r+=k;
        if(r>=3){
            ans++;
            r-=3;
        }
        else r=k;
    }
    cout<<ans;
}
int main(){
    cin>>c1>>c2;
    solve();
}