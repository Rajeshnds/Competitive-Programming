#include<bits/stdc++.h>
using namespace std;
int n,k,a[200001],b[200001],c[200001];
void solve(){
    int ans=1e9;
    for(int i=0;i<n;i++){
        int d=a[i],j=0;
        while(d){
            b[d]+=j;
            c[d]++;
            if(c[d]==k)ans=min(ans,b[d]);
            d/=2;
            j++;
        }
    }
    cout<<ans;
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    solve();
}