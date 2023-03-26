#include<bits/stdc++.h>
using namespace std;
int n;
string a,b;
void read(){
    cin>>n>>a>>b;
}
void solve(){
    long long c[2][2]={0,0};
    for(int i=0;i<n;i++){
        c[a[i]-'0'][b[i]-'0']++;
    }
    cout<<c[0][0]*(c[1][0]+c[1][1])+c[1][0]*c[0][1];
}
int main(){
    read();
    solve();
}
