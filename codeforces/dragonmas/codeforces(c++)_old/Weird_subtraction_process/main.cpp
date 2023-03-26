#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,k;
void repeat(ll &a,ll &b){
    while(a>0&&b>0){
        if(a>=2*b)a=a%(2*b);
        else if(b>=2*a)b=b%(2*a);
        else break;
    }
}
int main(){
    cin>>a>>b;repeat(a,b);cout<<a<<" "<<b;
}
