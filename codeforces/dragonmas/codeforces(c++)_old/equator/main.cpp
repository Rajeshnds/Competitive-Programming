#include<bits/stdc++.h>
using namespace std;
long long s,n,a[200001],t;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],s+=a[i];
    for(int i=1;i<=n;i++){
        t+=a[i];
        if(t>=(s+1)/2)return cout<<i,0;
    }
}
