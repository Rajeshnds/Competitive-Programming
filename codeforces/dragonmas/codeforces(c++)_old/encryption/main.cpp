#include<bits/stdc++.h>
using namespace std;
long long n,p,a[100001],s,m;
int main(){
    cin>>n>>p;
    for(int i=1;i<=n;i++)cin>>s,a[i]=a[i-1]+s;
    for(int i=1;i<=n;i++){
        m=max(m,a[i]%p+(a[n]-a[i])%p);
    }
    cout<<m;
}
