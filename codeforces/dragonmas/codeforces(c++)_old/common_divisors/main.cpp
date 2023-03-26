#include<bits/stdc++.h>
using namespace std;
long long n,m,b,k,i;
int main(){
    cin>>n;
    for(i=0;i<n;i++){
        cin>>b;
        m=__gcd(m,b);
    }
    for(i=1;i*i<m;i++){
        if(m%i==0)k+=2;
    }
    if(i*i==m)k++;
    cout<<k;
}
