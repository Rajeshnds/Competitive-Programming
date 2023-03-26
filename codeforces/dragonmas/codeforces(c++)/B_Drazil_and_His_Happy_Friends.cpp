#include<bits/stdc++.h>
using namespace std;
int n,m,a[101],b,t,g;
int main(){
    cin>>n>>m;
    g=__gcd(n,m);
    for(int i=0;i<2;i++){
        cin>>b;
        for(int j=0;j<b;j++){
            cin>>t;
            a[t%g]=1;
        }
    }
    for(int i=0;i<g;i++){
        if(a[i]==0)return cout<<"No",0;
    }
    cout<<"Yes";
}