#include<bits/stdc++.h>
using namespace std;
int t,n,l,r,s;
void solve(){
    int a[501]={0},b[501]={0},k=0,d=0,e=0;
    k=r-l+1;
    d=(1+k)*k/2;
    e=(2*n-k+1)*k/2;
    if(s>e||s<d){cout<<-1;return;}
    for(int i=1;i<=k;i++){
        b[i]=1;
        for(int j=n;j>=k+1;j--){
            if(b[j]==0&&d-i+j<=s){
                d=d-i+j;
                b[i]=0;
                b[j]=1;
                break;
            }
        }
    }
    int h=l,j=1;
    for(int i=1;i<=n;i++){
        if(b[i])a[l++]=i;
        else{
            if(j==h)j=r+1;
            a[j++]=i;
        }
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>l>>r>>s;
        solve();
    }
}