#include<bits/stdc++.h>
using namespace std;
#define ll long long
priority_queue<ll>q;
ll n,m,j,a,s,t,b;
ll song(ll n,ll m){
    for(int i=0;i<n;i++)cin>>a>>b,q.push(a-b),s+=a,t+=b;
    if(t>m)return -1;
    while(m<s)s-=q.top(),q.pop(),j++;
    return j;
}
int main(){
    cin>>n>>m;cout<<song(n,m);
}
