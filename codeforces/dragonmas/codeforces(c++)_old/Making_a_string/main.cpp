#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,s,a;
map<ll,bool>m;
ll max_length(ll n){
    while(n--){
        cin>>a;
        while(m[a])a--;
        s+=a;
        if(a>0)m[a]=1;
    }
    return s;
}
int main(){
    cin>>n;cout<<max_length(n);
}
