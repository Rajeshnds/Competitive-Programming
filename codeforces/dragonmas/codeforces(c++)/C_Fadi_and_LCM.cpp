#include<bits/stdc++.h>
using namespace std;
long long n,d,i;
int main(){
    cin>>n;
    d=sqrt(n);
    for(i=d;i>0;i--){
        if(n%i==0&&__gcd(i,n/i)==1){
            return cout<<i<<" "<<n/i,0;
        }
    }
}