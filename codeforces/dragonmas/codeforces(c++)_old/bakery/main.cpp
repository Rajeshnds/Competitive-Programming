#include<bits/stdc++.h>
using namespace std;
int n,m,k,u[100001],v[100001],l[100001],a[100001],d,b=1000000001;
int main(){
    cin>>n>>m>>k;
    if(k==0||k==n)return cout<<-1,0;
    for(int i=1;i<=m;i++)cin>>u[i]>>v[i]>>l[i];
    for(int i=1;i<=k;i++)cin>>d,a[d]=1;
        for(int i=1;i<=m;i++){
            if(a[u[i]]+a[v[i]]==1)b=min(b,l[i]);
    }
    cout<<(b<1000000001?b:-1);
}
