#include<bits/stdc++.h>
using namespace std;
long long n,k,d=1,ans,m;
int main(){
    cin>>n>>k;
    m=n;
    while(n){
        ans=ans+d;
        d=d*2;
        n/=2;
    }
    cout<<(k==1?m:ans);
}