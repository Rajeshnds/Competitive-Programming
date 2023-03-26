#include<bits/stdc++.h>
using namespace std;
int t,a,b,k;
int find_prime(int n){
    int d=0;
    for(int i=2;i*i<=n;i++){
        while(n%i==0)d++,n/=i;
    }
    return d+(n>1);
}
void solve(){
    if(a>b)swap(a,b);
    int m;
    if(b%a==0&&a!=b)m=1;
    else m=2;
    int i=2,d=0;
    while(a>1){
        while(a%i==0)d++,a/=i;
        i++;
    }
    i=2;
    while(b>1){
        while(b%i==0)d++,b/=i;
        i++;
    }
    cout<<(m<=k&&k<=d?"YES":"NO");
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b>>k;
        solve();
    }
}