#include<bits/stdc++.h>
using namespace std;
long long n,a[1001][1001],k;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
    k=sqrt(a[1][2]*a[1][3]/a[2][3]);
    cout<<k<<" ";
    for(int i=2;i<=n;i++)
        cout<<a[i][1]/k<<" ";
}
