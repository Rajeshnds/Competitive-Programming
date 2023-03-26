#include<bits/stdc++.h>
using namespace std;
long long w,h,k=1;
int main(){
    cin>>w>>h;
    for(int i=1;i<=w+h;i++)k=(k*2)%998244353;
    cout<<k;
}
