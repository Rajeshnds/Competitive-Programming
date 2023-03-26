#include<bits/stdc++.h>
using namespace std;
long long n,b,a[200001],k,c;
int main(){
    cin>>n>>c;
    a[n]=c;
    for(int i=2;i<=n/2;i++){
        cin>>b;
        k=min(b-a[i-1],c);
        a[n-i+1]=k;
        a[i]=b-k;
        c=k;
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}