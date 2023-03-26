#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll total_jump(ll n){
    return (n-3)*(n-1)+1;
}
int main(){
    cin>>n;cout<<total_jump(n);
}
