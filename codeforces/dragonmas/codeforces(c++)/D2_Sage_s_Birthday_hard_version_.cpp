#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001];
void solve(){
    int j=0,k=0;
    for(int i=1;i<n;i+=2)b[i]=a[j++];
    for(int i=0;i<n;i+=2)b[i]=a[j++];
    for(int i=1;i<n-1;i+=2){
        if(b[i]<b[i-1]&&b[i]<b[i+1])k++;
    }
    cout<<k<<endl;
    for(int i=0;i<n;i++)cout<<b[i]<<" ";
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    solve();
}