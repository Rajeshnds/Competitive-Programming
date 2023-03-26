#include<bits/stdc++.h>
using namespace std;
int t,n;
string equal(int n){
    int a[n+1],d=1,f=1,g=1,k=INT_MAX,l=INT_MAX,b;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1&&f)k=i,f=0;
        if(a[i]==-1&&g)l=i,g=0;
    }
    cin>>b;if(b!=a[0])d=0;
    for(int i=1;i<n;i++){
        cin>>b;
        if(b>a[i]&&k>=i)d=0;
        else if(b<a[i]&&l>=i)d=0;
    }
    return d?"YES":"NO";
}
int main(){
    for(cin>>t;t--;)cin>>n,cout<<equal(n)<<endl;
}
