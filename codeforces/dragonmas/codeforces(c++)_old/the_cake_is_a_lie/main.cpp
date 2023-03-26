#include<bits/stdc++.h>
using namespace std;
int n,m,k,t;
int main(){
    for(cin>>t;t--;cout<<endl){
    cin>>n>>m>>k;
    if(n>m)swap(n,m);
    int l=(n-1)+(m-1)*n;
    int d=(n-1)*(n)/2+m*(1+m)/2-1;
    cout<<(k>=l&&k<=d?"YES":"NO");
    }
}
