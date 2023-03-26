#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001],c[1001],k,l;
void solve(){
    for(int i=1;i<=n;i++){
        k=0;l=0;
        for(int j=1;j<=n;j++){
            if(j<i&&c[j]>c[i])k++;
            else if(j>i&&c[j]>c[i])l++;
        }
        if(k!=a[i]||l!=b[i]){cout<<"NO";return;}
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)cout<<c[i]<<" ";
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i],c[i]=(n-a[i]-b[i]);
    solve();
}