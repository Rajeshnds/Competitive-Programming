#include<bits/stdc++.h>
using namespace std;
int n,a[100001],l,r,q;
void solve(){
    for(int i=0;i<q;i++){
        cin>>l>>r;
        cout<<(a[r]-a[l-1])/10<<endl;
    }
}
int main(){
    int x,k=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[i]=a[i-1]+x;
    }
    cin>>q;
    solve();
}