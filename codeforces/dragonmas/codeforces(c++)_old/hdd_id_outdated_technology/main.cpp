#include<bits/stdc++.h>
using namespace std;
long long n,a[200001],b,k;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b;
        a[b]=i;
    }
    for(int i=2;i<=n;i++){
        k+=abs(a[i]-a[i-1]);
    }
    cout<<k;
}
