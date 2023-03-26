#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a;
int sum_of_digits(ll n){
    while(n>9)n-=9,a+=9+(n%10),n/=10;
    return n+a;
}
int main(){
    cin>>n;cout<<sum_of_digits(n);
}
