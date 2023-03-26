#include<bits/stdc++.h>
using namespace std;
long long t,n,s,d,k,f;
void solve(){
    f=0;
    while(k>s){
        f++;
        k-=(n%10);
        n/=10;
        while(n%10==9)k-=9,n/=10,f++;
        n++;
        k++;
    }
    for(int i=1;i<=f;i++)n*=10;
    cout<<n-d;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        k=0;
        cin>>n>>s;
        d=n;
        while(n){
            k+=(n%10);
            n/=10;
        }
        n=d;
        solve();
    }
}