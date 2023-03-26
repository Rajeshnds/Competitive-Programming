#include<bits/stdc++.h>
using namespace std;
int n,a,k=INT_MAX;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        k=min(k,a/max(i-1,n-i));
    }
    cout<<k;
}