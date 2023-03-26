#include<bits/stdc++.h>
using namespace std;
long long k=1,j,n,m,a[200001],b[200001],c[200001],d[200001],x;
int main(){
    cin>>n>>m;
    for(int i=0;i<n+m;i++)cin>>a[i];
    c[0]=INT_MAX;
    for(int i=0;i<n+m;i++){
        cin>>x;
        if(x==0)b[j++]=a[i];
        else c[k++]=a[i];
    }
    c[k]=INT_MAX;
    j=1;
    for(int i=0;i<n;i++){
        if(b[i]>c[j]){j++,i--;continue;}
        else{
           if(abs(b[i]-c[j])<abs(b[i]-c[j-1]))d[j]++;
           else d[j-1]++;
        }
    }
    for(int i=1;i<=m;i++)cout<<d[i]<<" ";
}
