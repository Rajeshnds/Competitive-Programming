#include<bits/stdc++.h>
using namespace std;
int n,a[200001],b[200001],c[200001];
void solve(){
    int j=0,d=n-2;
    for(int i=0;i<n-1;i++,cout<<endl){
        if(c[a[i]]==1||c[b[i]]==1)cout<<j++;
        else cout<<d--;
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>a[i]>>b[i];
        c[a[i]]++;
        c[b[i]]++;
    }
    solve();
}