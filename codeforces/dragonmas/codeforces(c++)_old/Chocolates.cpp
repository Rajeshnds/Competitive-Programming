#include<bits/stdc++.h>
using namespace std;
long long n,k;
main(){
    cin>>n;long long a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=n-1;i>0;i--){
        a[i]=min(a[i],a[i+1]-1);
        k+=max(0LL,min(a[i],a[i+1]-1));
        //k+=a[i]<0?0:a[i];
    }
    cout<<k+a[n];
}
