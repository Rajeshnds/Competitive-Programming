#include<bits/stdc++.h>
using namespace std;
int n,a[10];
void solve(){
    int k=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
        if(a[i]+!i<a[k]+!k)k=i;
    }
    if(!k)cout<<1;
    for(int i=0;i<=a[k];i++)cout<<k;
}
int main(){
    int t;
    for(cin>>t;t--;cout<<endl){
        solve();
    }
}