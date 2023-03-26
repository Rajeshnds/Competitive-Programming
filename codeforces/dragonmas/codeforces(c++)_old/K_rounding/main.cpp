#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main(){
    cin>>n>>k;
    k=pow(10,k);
    cout<<lcm(n,k);
}
