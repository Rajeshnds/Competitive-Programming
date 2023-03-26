#include<bits/stdc++.h>
using namespace std;
long long n,a[200001],s,b,m;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],b=max(b,a[i]);
    for(int i=0;i<n;i++){
        s+=(b-a[i]);
        m=__gcd(m,b-a[i]);
    }
    cout<<s/m<<" "<<m;
}
