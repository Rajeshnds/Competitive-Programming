#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[1001],b,c,s;
int main(){
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)a[i]=1000000;
    for(int i=1;i<=n;i++){
        cin>>b>>c;
        a[b]=min(a[b],c);
    }
    for(int i=1;i<=m;i++)s+=a[i];
    cout<<min(s,k);
}
