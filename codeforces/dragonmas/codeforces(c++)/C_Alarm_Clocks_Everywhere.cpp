#include<bits/stdc++.h>
using namespace std;
long long n,g,d,c,k,m;
int main(){
    cin>>n>>m>>c;
    k=c;
    for(int i=1;i<n;i++){
        cin>>d;
        g=__gcd(g,d-c);
        c=d;
    }
    for(int i=1;i<=m;i++){
        cin>>d;
        if(g%d==0)return cout<<"YES"<<endl<<k<<" "<<i,0;
    }
    cout<<"NO";
}