#include<bits/stdc++.h>
using namespace std;
int n,x;
int solve(){
    int a,b[100001]={0},c[100001]={0},r=-1;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a;
        if(b[a])r=0;
        if(r)if(b[a&x]||c[a])r=1;
        if(r&&r!=1)if(c[a&x])r=2;
        b[a]=c[a&x]=1;
    }
    cout<<r;
}
int main(){
    solve();
}










































