#include<bits/stdc++.h>
using namespace std;
long long n,a,b,k=INT_MIN,l=INT_MAX,p=INT_MIN,q=INT_MAX;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        k=max(k,a);
        l=min(l,a);
        p=max(p,b);
        q=min(q,b);
    }
    cout<<max((k-l)*(k-l),(p-q)*(p-q));
}