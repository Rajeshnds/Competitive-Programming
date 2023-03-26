#include<bits/stdc++.h>
using namespace std;
const int N=200001;
#define ll long long
struct node{
    int first,last,prefx,sufx,count;
    ll ans;
};
int n,q,a[N];
node seg[4*N],neutral;
node merge(node a,node b){
    node c;
    c.ans=a.ans+b.ans;
    if(a.last<=b.first){
        c.ans+=(1LL*a.sufx*b.prefx);
        if(a.prefx==a.count)c.prefx=a.count+b.prefx;
        else c.prefx=a.prefx;
        if(b.sufx==b.count)c.sufx=a.sufx+b.count;
        else c.sufx=b.sufx;
    }
    else{
        c.prefx=a.prefx;
        c.sufx=b.sufx;
    }
    c.count=a.count+b.count;
    c.first=a.first;
    c.last=b.last;
    return c;
}
void build(int i,int low,int high){
    if(low==high){
        seg[i].ans=seg[i].prefx=seg[i].sufx=seg[i].count=1;
        seg[i].first=seg[i].last=a[low];
        return;
    }    
    int mid=(low+high)/2;
    build(i*2,low,mid);
    build(i*2+1,mid+1,high);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
void update(int i,int low,int high,int pos,int value){
    if(pos<low||pos>high)return;
    if(low==high&&pos==low){
        seg[i].ans=seg[i].prefx=seg[i].sufx=seg[i].count=1;
        seg[i].first=seg[i].last=value;
        return;
    }
    int mid=(low+high)/2;
    update(i*2,low,mid,pos,value);
    update(i*2+1,mid+1,high,pos,value);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
node query(int i,int low,int high,int l,int r){
    if(l>high||r<low)return neutral;
    if(low>=l&&high<=r){
        return seg[i];
    }
    int mid=(low+high)/2;
    node left=query(i*2,low,mid,l,r);
    node right=query(i*2+1,mid+1,high,l,r);
    return merge(left,right);
}
void solve(){
    neutral.ans=neutral.prefx=neutral.sufx=neutral.count=0;
    neutral.first=INT_MAX;
    neutral.last=-1;
    int t,l,r;
    for(int i=1;i<=q;i++){
        cin>>t>>l>>r;
        if(t==1){
            a[l]=r;
            update(1,1,n,l,r);
        }
        else{
            cout<<query(1,1,n,l,r).ans<<endl;
        }
    }
}
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    build(1,1,n);
    solve();
}