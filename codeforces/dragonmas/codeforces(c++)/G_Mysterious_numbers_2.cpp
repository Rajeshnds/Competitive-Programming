#include<bits/stdc++.h>
using namespace std;
int a,b,c;
void solve(){
    int p=a,q=b;
    c--;
    int d;
    while(c--){
        d=p;
        p=q;
        q=q+d;
    }
    cout<<q;
}
int main(){
    cin>>a>>b>>c;
    solve();
}