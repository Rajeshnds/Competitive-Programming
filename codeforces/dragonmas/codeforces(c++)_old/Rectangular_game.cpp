#include<bits/stdc++.h>
using namespace std;
int n,k;
int pebble(int n,int k){
    for(int i=2;i<=n;i++)if(n%i==0)k+=n/i,n/=i,i=1;
    return k;
}
int main(){
    cin>>n;k=n;
    cout<<pebble(n,k);
}
