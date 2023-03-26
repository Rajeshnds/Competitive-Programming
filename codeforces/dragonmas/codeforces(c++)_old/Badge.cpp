#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],i=1;
int main(){
    for(cin>>n;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
    int c[n+1]={0};
    k=i;c[k]++;
    while(c[k]!=2){
        k=a[k];
        c[k]++;
    }
    cout<<k<<" ";
    }
}
