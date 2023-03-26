#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001];
void read(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],b[a[i]]=1;
}
void solve(){
    int j=0,c[100001]={0};
    for(int i=1;i<=n;i++)if(b[i]==0)c[j++]=i;j=0;
    for(int i=1;i<=n;i++){
        if(b[a[i]]==1&&a[i]<=n)b[a[i]]=2;
        else{
            a[i]=c[j++];
            b[a[i]]=2;
        }
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    read();
    solve();
}
