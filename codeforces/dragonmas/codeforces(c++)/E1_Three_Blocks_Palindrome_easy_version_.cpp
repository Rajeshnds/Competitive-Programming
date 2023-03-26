#include<bits/stdc++.h>
using namespace std;
int t,n,a[27],dp[27][2001],ans;
int sum(int k,int i,int j){
    return dp[k][j]-dp[k][i-1];
}
void solve(){
    int d,e;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            d=0;e=0;
            for(int k=1;k<=26;k++){
                d=max(d,sum(k,i,j));
                if(i>1&&j<n)e=max(e,min(sum(k,1,i-1),sum(k,j+1,n)));
            }
            ans=max(ans,2*e+d);
        }
    }
    cout<<ans;
}
int main(){
    int d;
    for(cin>>t;t--;cout<<endl){
        ans=0;
        fill(a,a+27,0);
        for(int i=1;i<=26;i++){
            for(int j=1;j<=2000;j++){
                dp[i][j]=0;
            }
        }
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>d;
            a[d]++;
            dp[d][i]=a[d];
        }
        for(int i=1;i<=26;i++){
            for(int j=1;j<=n;j++){
                if(dp[i][j]==0)dp[i][j]=dp[i][j-1];
            }
        }
        solve();
    }
}