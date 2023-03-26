#include<bits/stdc++.h>
using namespace std;
int t,n,h,a[1001];
void solve(){
    int k=a[n-1];
    int l=a[n-2];
    int d=h/(k+l);
    d*=2;
    int e=h%(k+l);
    if(e){
        if(e>k)d+=2;
        else d++;
    }
    cout<<d;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>h;
        fill(a,a+n+1,0);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        solve();
    }
}