#include<bits/stdc++.h>
using namespace std;
int n,k,a[51],m=INT_MAX,b[200001],d[200001];
void solve(){
    for(int i=0;i<n;i++){
        int t=0,c=a[i];
        while(c){
            b[c]+=t;
            d[c]++;
            if(d[c]==k)m=min(m,b[c]);
            c/=2;
            t++;
        }
    }
    cout<<m;
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    solve();
}