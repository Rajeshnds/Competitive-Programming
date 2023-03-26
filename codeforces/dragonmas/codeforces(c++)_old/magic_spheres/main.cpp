#include<bits/stdc++.h>
using namespace std;
int a,b,c,x,y,z;
void read(){
    cin>>a>>b>>c>>x>>y>>z;
}
void solve(){
    int k=0;
    if(a>x)k+=(a-x)/2+x;
    else k+=a;
    if(b>y)k+=(b-y)/2+y;
    else k+=b;
    if(c>z)k+=(c-z)/2+z;
    else k+=c;
    cout<<(k>=x+y+z?"Yes":"No");
}
int main(){
    read();
    solve();
}
