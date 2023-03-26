#include<bits/stdc++.h>
using namespace std;
int n,m,c,a[100001],b[100001];
int main(){
    cin>>n>>m>>c;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    for(int i=1;i<=n-m+1;i++){
        int k=1;
        for(int j=i;j<=i+m-1;j++){
            a[j]=(a[j]+b[k++])%c;
        }
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
