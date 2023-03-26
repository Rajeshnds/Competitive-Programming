#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll find_ak(ll n,ll k){
    k--;
    while(k--){
        string s=to_string(n);
        sort(s.begin(),s.end());
        if(s[0]=='0')break;
        n=n+((s[0]-'0')*(s[s.size()-1]-'0'));
    }
    return n;
}
int main(){
    ll t,n,k;
    for(cin>>t;t--;){
        cin>>n>>k;
        cout<<find_ak(n,k)<<endl;
    }
}
