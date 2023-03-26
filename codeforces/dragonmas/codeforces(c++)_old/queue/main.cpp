#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],b[100001],k,l;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    b[0]=a[0];
    for(int i=1;i<n;i++)b[i]=a[i]+b[i-1];
    for(int i=1;i<n;i++){
        if(a[i]<b[i-1]-l)k++,l+=a[i];
    }
    cout<<n-k;
}
