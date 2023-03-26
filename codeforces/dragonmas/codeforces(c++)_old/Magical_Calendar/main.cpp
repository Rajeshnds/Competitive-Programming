#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll magical_calendar(ll n,ll r){
    return min(r*(r+1)/2,(n-1)*(n)/2+1);
}
int main(){
    int t,n,r;
    for(cin>>t;t--;){
        cin>>n>>r;
        cout<<magical_calendar(n,r)<<endl;
    }
}
