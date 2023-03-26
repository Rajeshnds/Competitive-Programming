#include<bits/stdc++.h>
using namespace std;
int n,a[200001],b[200001],c[200001],d[200001];
void solve(){
    int j=0,k=0;
    for(int i=1;i<=n;i++){
        if(b[a[i]]>1&&(c[j]<a[i]||d[a[i]])){
            k++,b[a[i]]--,a[i]=c[j],j++;
        }
        d[a[i]]=1;
    }
    cout<<k<<endl;
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    int j=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],b[a[i]]++;
    for(int i=1;i<=n;i++){
        if(b[i]==0)c[j++]=i;
    }
    solve();
}