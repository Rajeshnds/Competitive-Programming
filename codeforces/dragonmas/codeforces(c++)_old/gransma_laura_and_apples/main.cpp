#include<bits/stdc++.h>
using namespace std;
long long k,d,n,p;
string s[41];
int main(){
    cin>>n>>p;
    for(int i=1;i<=n;i++)cin>>s[i];
    for(int i=n;i>=1;i--){
        if(s[i]=="half")k*=2;
        else k=k*2+1;
    }
    while(k){
        d+=(k/2)*p;
        if(k&1)d+=p/2;
        k/=2;
    }
    cout<<d;
}
