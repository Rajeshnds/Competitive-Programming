#include<bits/stdc++.h>
using namespace std;
long long  m=1000000007,x,y,n;
int main(){
    cin>>x>>y>>n;
    long long a[6]={x-y,x,y,y-x,-x,-y};
    cout<<(a[n%6]+m*2)%m;
}
