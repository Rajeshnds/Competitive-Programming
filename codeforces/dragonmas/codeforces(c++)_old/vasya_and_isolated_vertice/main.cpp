#include<bits/stdc++.h>
using namespace std;
long long n,m,k;
int main(){
    cin>>n>>m;
    while(k*(k-1)/2<m)k++;
    cout<<max(0LL,n-2*m)<<" "<<n-k;
}
