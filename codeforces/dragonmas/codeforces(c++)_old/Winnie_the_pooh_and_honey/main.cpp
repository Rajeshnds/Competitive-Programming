#include<bits/stdc++.h>
using namespace std;
int n,k,s,a;
int amount_of_honey(){
    cin>>n>>k;
    while(n--)cin>>a,a>=k?s+=max(a-3*k,a%k):s+=a;
    return s;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cout<<amount_of_honey();
}
