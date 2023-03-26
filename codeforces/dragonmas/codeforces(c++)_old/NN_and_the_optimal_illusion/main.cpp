#include<bits/stdc++.h>
using namespace std;
double pi=acos(-1);
int n,r;
void read(){
    cin>>n>>r;
}
void solve(){
    printf("%.81f",(r*sin(pi/n)/(1-sin(pi/n))));
}
int main(){
    read();
    solve();
}
