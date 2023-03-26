#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,s,a;
ll worst_case(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a,s=s+(a-1)*i;
    return s+n;
}
int main(){
    cout<<worst_case();
}
