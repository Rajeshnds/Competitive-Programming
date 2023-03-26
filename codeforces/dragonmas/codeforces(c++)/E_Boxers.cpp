#include<bits/stdc++.h>
using namespace std;
int n,a[200001],k,b[200001];
void solve(){
    b[0]=1;
    for(int i=0;i<n;i++){
        if(b[a[i]-1]==0)b[a[i]-1]=1,k++;
        else if(b[a[i]]==0)b[a[i]]=1,k++;
        else if(b[a[i]+1]==0)b[a[i]+1]=1,k++;
    }
    cout<<k;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    solve();
}