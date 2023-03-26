#include<bits/stdc++.h>
using namespace std;
const int N=100001;
int n,q,a[N],seg[4*N];
int merge(int i,int j){
    return i+j;
}
void build(int i,int low,int high){
    if(low==high){
        seg[i]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(i*2,low,mid);
    build(i*2+1,mid+1,high);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
void update(int i,int low,int high,int pos,int r){
    if(pos<low||pos>high)return;
    if(low==high&&low==pos){
        seg[i]=r;
        return;
    }
    int mid=(low+high)/2;
    update(i*2,low,mid,pos,r);
    update(i*2+1,mid+1,high,pos,r);
    seg[i]=merge(seg[i*2],seg[i*2+1]);
}
int query(int i,int low,int high,int l,int r){
    if(r<low||l>high)return 0;
    if(low>=l&&high<=r)return seg[i];
    int mid=(low+high)/2;
    int left=query(i*2,low,mid,l,r);
    int right=query(i*2+1,mid+1,high,l,r);
    return merge(left,right);
}
void solve(){
    int t,l,r;
    for(int i=1;i<=q;i++){
        cin>>t>>l>>r;
        if(t==1){
            a[l]=r;
            update(1,1,n,l,r);
        }
        else{
            cout<<query(1,1,n,l,r)<<endl;
        }
    }
}
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    build(1,1,n);
    solve();
}