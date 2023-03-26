#include<bits/stdc++.h>
using namespace std;
int n,m,k,a,b,l=1,x;
vector<int> v(1000001),v2(1000001);
int main(){
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        cin>>x;
        v[x]=1;
    }
    if(v[1])return cout<<1,0;
    for(int i=0;i<k;i++){
        cin>>a>>b;
        if(a==l)v2[a]=b,l=b;
        else if(b==l)v2[b]=a,l=a;
        if(v[l])return cout<<l,0;
    }
    cout<<l;
}