#include<bits/stdc++.h>
using namespace std;
const int N=131073;
#define ll long long
int n,m;
ll a[N];
struct node{
    int dist;
    ll ans;
};
node seg[4*N];
node merge(node a,node b){
    node c;
    c.dist=1+a.dist;
    if(c.dist%2)c.ans=(a.ans|b.ans);
    else c.ans=(a.ans^b.ans);
    return c;
}
void build(int i,int low,int high){
    if(low==high){
        seg[i].ans=a[low];
        seg[i].dist=0;
        return;
    }
    int mid=(low+high)/2;
    build(i*2,low,mid);
    build(i*2+1,mid+1,high);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
void update(int i,int low,int high,int pos,ll value){
    if(pos<low||pos>high)return;
    if(low==high&&low==pos){
        seg[i].ans=value;
        return;
    }
    int mid=(low+high)/2;
    update(i*2,low,mid,pos,value);
    update(i*2+1,mid+1,high,pos,value);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
void solve(){
    int pos;
    ll value;
    for(int i=1;i<=m;i++){
        cin>>pos>>value;
        update(1,1,n,pos,value);
        cout<<seg[1].ans<<endl;
    }
}
int main(){
    cin>>n>>m;
    n=(1<<n);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    build(1,1,n);
    solve();
}



