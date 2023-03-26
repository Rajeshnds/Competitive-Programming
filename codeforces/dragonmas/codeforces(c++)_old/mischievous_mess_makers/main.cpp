#include<bits/stdc++.h>
using namespace std;
long long n,k,s;
int main(){
    cin>>n>>k;
    k=min(k,n/2);
    for(int i=1;i<=k;i++)s+=(n-i);
    for(int i=1;i<k;i++)s+=i;
    s+=(n-k-k)*k;
    cout<<s;
}
