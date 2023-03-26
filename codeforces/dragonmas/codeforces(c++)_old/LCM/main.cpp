#include<bits/stdc++.h>
using namespace std;
long long a;
void read(){
    cin>>a;
}
void solve(){
    long long k=0,i=0;
    for(i=1;i*i<a;i++)if(a%i==0)k+=2;
    cout<<(i*i==a?k+1:k);
}
int main(){
    read();
    solve();
}
