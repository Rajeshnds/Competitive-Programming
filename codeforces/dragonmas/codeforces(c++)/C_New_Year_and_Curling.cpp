#include<bits/stdc++.h>
using namespace std;
int n,r,a[1001],k;
double b[1001];
void solve(){
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=r;
        for(int j=1;j<i;j++){
            k=a[j]-a[i];
            b[i]=max(b[i],b[j]+sqrt(4*r*r-k*k));
        }
        printf("%.08f ",b[i]);
    }
}
int main(){
    cin>>n>>r;
    solve();
}