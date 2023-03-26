#include<bits/stdc++.h>
using namespace std;
int n,m,k,j=1,a[101],b[101],c[101],d[101];
int speed(int n,int m){
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
    for(int i=1;i<=m;i++)cin>>c[i]>>d[i];
    for(int i=1;i<=m;i++){
        if(d[i]>b[j])k=max(k,min(100,d[i])-b[j]);
        if(a[j]<c[i])a[j+1]+=a[j],j++,i--;
        else if(a[j]==c[i])a[j+1]+=a[j],j++,c[i+1]+=c[i];
        else c[i+1]+=c[i];
    }
    return k;
}
int main(){
    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);
    cin>>n>>m;
    cout<<speed(n,m);
}
