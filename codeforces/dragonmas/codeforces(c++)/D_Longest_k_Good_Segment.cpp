#include<bits/stdc++.h>
using namespace std;
int n,k,b[1000001],a[500001];
void solve(){
    int d=0,l=1,p,q,m=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(b[a[i]]==0)d++;
        b[a[i]]++;
        if(d>k){
            b[a[l]]--;
            if(b[a[l]]==0)d--;
            l++; 
        }
        if(i-l+1>m)m=i-l+1,p=l,q=i;
    }
    cout<<p<<" "<<q;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    solve();
}