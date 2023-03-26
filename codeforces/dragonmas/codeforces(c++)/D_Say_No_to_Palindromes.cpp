#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],b[6][200001];
string s,t[6]={"abc","acb","bac","bca","cab","cba"};
void solve(){
    int l,r;
    for(int i=0;i<6;i++){
        int c=0;
        fill(a,a+n,0);
        for(int j=0;j<n;j++){
            if(s[j]!=t[i][j%3])a[j]=1;
        }
        b[i][0]=a[0];
        for(int j=1;j<n;j++)b[i][j]=b[i][j-1]+a[j];
    }
    while(m--){
        cin>>l>>r;
        l--;r--;
        int ans=1e6;
        for(int i=0;i<6;i++){
            if(l==0)ans=min(ans,b[i][r]);
            else ans=min(ans,b[i][r]-b[i][l-1]);
        }
        cout<<ans<<endl;
    }
}
int main(){
    cin>>n>>m>>s;
    solve();
}