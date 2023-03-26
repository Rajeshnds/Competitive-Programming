#include<bits/stdc++.h>
using namespace std;
int n,a[200001];
void solve(){
    int j=1;
    long long s=0;
    for(int i=1;i<=n;i++){
        while(j<n&&a[j+1]<=2*a[i])j++;
        s+=(j-i);
    }
    cout<<s;
}
int main(){
    int d;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>d,a[i]=abs(d);
    sort(a,a+n+1);
    solve();
}