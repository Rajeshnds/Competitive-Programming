#include<bits/stdc++.h>
using namespace std;
const int N=100001;
int a[N],seg[4*N],n;
void build(int i,int low,int high){
    if(low==high){
        seg[i]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(i*2+1,low,mid);
    build(i*2+2,mid+1,high);
    seg[i]=seg[i*2+1]+seg[i*2+2];
}
int query(int i,int low,int high,int l,int r){
    if(low>=l&&high<=r){
        return seg[i];
    }
    if(l>high||r<low){
        return 0;
    }
    int mid=(low+high)/2;
    int left=query(i*2+1,low,mid,l,r);
    int right=query(i*2+2,mid+1,high,l,r);
    return left+right;
}
void solve(){
    int l,r;
    int q;
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>l>>r;
        cout<<query(0,0,n-1,l,r)<<endl;
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    build(0,0,n-1);
    solve();
}