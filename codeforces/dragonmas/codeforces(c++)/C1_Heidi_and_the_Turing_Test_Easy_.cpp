#include<bits/stdc++.h>
using namespace std;
int n,a[42],b[42],p,q=100,r,s=100;
map<int,int>m1,m2;
void solve(){
    for(int i=1;i<=4*n+1;i++){
        if((a[i]>=q&&a[i]<=p&&(b[i]==s||b[i]==r))||
        (b[i]>=s&&b[i]<=r&&(a[i]==p||a[i]==q)))continue;
        else{cout<<a[i]<<" "<<b[i];return;}
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=4*n+1;i++){
        cin>>a[i]>>b[i];
        m1[a[i]]++;
        m2[b[i]]++;
        if(m1[a[i]]>1)p=max(p,a[i]),q=min(q,a[i]);
        if(m2[b[i]]>1)r=max(r,b[i]),s=min(s,b[i]);
    }
    solve();
}