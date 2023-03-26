#include<bits/stdc++.h>
using namespace std;
int n,d;
int reverse(int n){
    int d=0;
    while(n){
        d=d*10+n%10;
        n/=10;
    }
    return d;
}
bool is_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
void solve(){
    int k=12;
    while(n){
        k++;
        int d=reverse(k);
        if(k!=d&&is_prime(k)&&is_prime(d))n--;
    }
    cout<<k;
}
int main(){
    cin>>n;
    solve();
}

