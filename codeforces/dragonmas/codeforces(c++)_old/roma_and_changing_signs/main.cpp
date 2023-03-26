#include<bits/stdc++.h>
using namespace std;
int n,k,s,a[100001];
void read(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
}
void solve(){
    int l=0,d=0;
    for(int i=0;i<k;i++){
        if(a[i]<0)a[i]*=-1,s+=(2*a[i]),l++;
    }
    l=k-l;
    if(l){
        d=*min_element(a,a+n);
        if(l&1)s-=(2*d);
    }
    cout<<s;
}
int main(){
    read();
    solve();
}
