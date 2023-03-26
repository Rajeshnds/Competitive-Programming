#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s,t={4,5,6,3,2,1};
ll n,k;
int main(){
    cin>>s;
    char c=s[s.size()-1];
    s.erase(s.size()-1);
    n=stoll(s);
    k=(n+3)/4;
    k*=2;
    k-=(n&1);
    k=(k-1)*6;
    if(n%4==0||(n+1)%4==0)k+=(n-1-2);
    else k+=(n-1);
    k+=t[c-'a'];
    cout<<k;
}
