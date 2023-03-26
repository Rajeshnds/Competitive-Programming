#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll kuriyama_answer(ll c[],ll d[],int type,int l,int r){
    return type==1?c[r]-c[l-1]:d[r]-d[l-1];
}
int main(){
    int type,l,r,n,m;
    cin>>n;
    int a[n+1],b[n+1];
    ll c[n+1]={0},d[n+1]={0};
    for(int i=1;i<=n;i++)cin>>a[i],b[i]=a[i],c[i]=c[i-1]+a[i];
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)d[i]=d[i-1]+b[i];
    cin>>m;
    while(m--){
        cin>>type>>l>>r;
        cout<<kuriyama_answer(c,d,type,l,r)<<endl;
    }
}
