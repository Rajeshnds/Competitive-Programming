#include<bits/stdc++.h>
using namespace std;
int t,n,b[200001],c[200001],d[200001];
void solve(){
    int a,j=1,k,l=0,p=0;
    fill(b,b+n+1,0);
    fill(d,d+n+1,0);
    for(int i=0;i<n;i++){
        cin>>a;
        if(b[a]==0){
            cout<<a<<" ";
            b[a]=1;
            c[i]=a;
            for(int j=p+1;j<a;j++)d[l++]=j;
            p=a;
        }
        else{
            while(b[j]==1)j++;
            cout<<j<<" ";
            b[j]=1;
            c[i]=d[--l];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)cout<<c[i]<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}