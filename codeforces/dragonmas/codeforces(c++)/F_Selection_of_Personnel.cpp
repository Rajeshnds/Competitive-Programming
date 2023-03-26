#include<bits/stdc++.h>
using namespace std;
long long n,s,t,u;
int main(){
    cin>>n;
    s=n/1*(n-1)/2*(n-2)/3*(n-3)/4*(n-4)/5;
    t=s*(n-5)/6;
    u=t*(n-6)/7;
    cout<<s+t+u;
}