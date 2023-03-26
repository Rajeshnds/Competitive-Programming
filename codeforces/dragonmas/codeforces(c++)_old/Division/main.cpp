#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,p,q,i;
ll div_int(){
    i=2;
    cin>>p>>q;
    if(p%q!=0)return p;
        while(p%i!=0||(p/i)%q==0)i++;
    return p/i;
}
int main(){
    for(cin>>t;t--;)cout<<div_int()<<"\n";
}
