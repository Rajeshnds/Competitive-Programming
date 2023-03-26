#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[101];
void read(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n-1;i++){
            int l=min(a[i],k);
            a[i]-=l;
            a[n]+=l;
            k-=l;
        }
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    }
}
int main(){
    read();
}
