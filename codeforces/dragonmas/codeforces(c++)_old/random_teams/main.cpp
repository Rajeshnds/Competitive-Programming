#include<bits/stdc++.h>
using namespace std;
long long k,l,d,n,m,c;
int main(){
    cin>>n>>m;
    k=n/m;
    l=n%m;
    c=k+1;
    d=n-m+1;
    cout<<l*c*(c-1)/2+(m-l)*k*(k-1)/2<<" "<<d*(d-1)/2;
}
