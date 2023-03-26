#include<bits/stdc++.h>
using namespace std;
int n,k,m=INT_MAX,l,a;
int hole(int n,int k){
    int b[n+3];
    for(int i=1;i<=n;i++){
        cin>>a;
        b[i]=b[i-1]+a;
        if(i>=k&&b[i]-b[i-k]<m)m=b[i]-b[i-k],l=i-k+1;
    }
    return l;
}
int main(){
    cin>>n>>k;
    cout<<hole(n,k);
}
