#include<bits/stdc++.h>
using namespace std;
int n,a,b,k,c[200001];
void solve(){
    int x,d,ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        d=x%(a+b);
        if(d==0)d=a+b;
        c[i]=(d+a-1)/a-1;
    }
    sort(c,c+n);
    for(int i=0;i<n;i++){
        if(k>=c[i])ans++,k-=c[i];
    }
    cout<<ans;
}
int main(){
    cin>>n>>a>>b>>k;
    solve();
}