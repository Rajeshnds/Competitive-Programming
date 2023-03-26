#include<bits/stdc++.h>
using namespace std;
int n,a[200001],b[200001],j,k;
map<int,int>m;
void solve(){
    for(int i=0;i<j;i++){
        while(a[b[i]])b[i]=a[b[i]];
        a[b[i]]=b[i+1];
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        m[a[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(m[i]==0)b[j++]=i;
    }
    b[j]=b[0];
    solve();
}