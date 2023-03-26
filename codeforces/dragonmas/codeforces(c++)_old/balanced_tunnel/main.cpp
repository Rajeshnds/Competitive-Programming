#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001],k,m;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>k,b[k]=i;
    k=b[a[1]];
    for(int i=2;i<=n;i++){
        if(b[a[i]]<k)m++;
        k=max(k,b[a[i]]);
    }
    cout<<m;
}
