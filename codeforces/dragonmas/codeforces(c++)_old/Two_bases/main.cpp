#include<bits/stdc++.h>
using namespace std;
long long n,bx,s,a,t;
char base_compare(){
    cin>>n>>bx;
    for(int i=0;i<n;i++)cin>>a,s+=a,s*=bx;
    s/=bx;
    cin>>n>>bx;
    for(int i=0;i<n;i++)cin>>a,t+=a,t*=bx;
    t/=bx;
    return s>t?'>':s<t?'<':'=';
}
int main(){
    cout<<base_compare();
}
