#include<bits/stdc++.h>
using namespace std;
int q,n,x=2e5+1,y=2e5+1;
map<int,int>m;
char c;
void solve(){
    x++;
    for(int i=1;i<=q;i++){
        cin>>c>>n;
        if(c=='?')cout<<min(m[n]-x,y-m[n])<<endl;
        else if(c=='L')m[n]=--x;
        else m[n]=++y;
    }
}
int main(){
    cin>>q;
    solve();
}