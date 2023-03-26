#include<bits/stdc++.h>
using namespace std;
int n,k,a,b[11],s;
void solve(){
    for(int i=1;i<10;i++){
        int d=min(b[i],k/i);
        s+=d;
        k-=(d*i);
    }
    cout<<min(n*10,s+(k/10));
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=(a/10);
        b[10-a%10]++;
    }
    solve();
}