#include<bits/stdc++.h>
using namespace std;
int n,m,s,a,b,c[10001];
int main(){
    cin>>n;
    for(int i=1;i<n;i++)cin>>a>>b,c[a]++,c[b]++;
    for(int i=1;i<=n;i++){
        s+=(c[i]*(c[i]-1)/2);
    }
    cout<<s;
}