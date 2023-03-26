#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,a,b;
int prime_area(ll x){
    if(x%2==0)return 0;
    for(int i=3;i<=sqrt(x);i+=2)if(x%i==0)return 0;
    return 1;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        if(a-b==1){
            if(prime_area(a+b))cout<<"YES";
            else cout<<"NO";
        }
        else cout<<"NO";
    }
}
