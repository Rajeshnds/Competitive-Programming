#include<bits/stdc++.h>
using namespace std;
double n,k,a[5001],m;
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>m,a[i]=a[i-1]+m;
    m=0;
    for(int i=k;i<=n;i++){
        for(int j=i;j<=n;j++){
            m=max(m,(a[j]-a[j-i])/i);
        }
    }
    cout<<setprecision(10)<<m;
}