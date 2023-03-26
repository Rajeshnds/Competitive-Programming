#include<bits/stdc++.h>
using namespace std;
int n,p,l,r,k,s;
int main(){
    cin>>n>>p>>l>>r;
    k=l+(r-l)/2;
    if(p<=k){
        if(l!=1)s+=abs(l-p)+1,p=l;
        if(r!=n)s+=(r-p)+1;
    }
    else{
        if(r!=n)s+=abs(r-p)+1,p=r;
        if(l!=1)s+=(p-l)+1;
    }
    cout<<s;
}