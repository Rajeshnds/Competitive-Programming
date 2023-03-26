#include<bits/stdc++.h>
using namespace std;
char a,b=0,c=1,d=2;
void solve(){
    while(cin>>a){
        if((a!=b||b!=c)&&(a!=b||c!=d))
        cout<<a,
        d=c,
        c=b,
        b=a;
    }
}
int main(){
    solve();
}