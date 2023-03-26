#include<bits/stdc++.h>
using namespace std;
int n,a[100001];
void solve(){
    int l=1,r=n;
    long long ans=0;
    while(l<r){
        while(a[l+1]>a[l]&&l<r)l++;
        while(a[r-1]>a[r]&&l<r)r--;
        if(l==r)break;
        else if(a[l]<=a[r]){
            ans+=a[l]+1-a[l+1];
            a[l+1]=a[l]+1;
        }
        else{
            ans+=a[r]+1-a[r-1];
            a[r-1]=a[r]+1;
        }
    }
    cout<<ans;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    solve();
}