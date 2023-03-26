#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,z,p,r,c;
void f(int k){
    int d;
    if(k==1){
        d=r;
        r=c;
        c=n-d+1;
        swap(n,m);
    }
    else if(k==2){
        d=r;
        r=n-d+1;
        d=c;
        c=m-d+1;
    }
    else if(k==3){
        d=r;
        r=m-c+1;
        c=d;
        swap(n,m);
    }
}
void solve(){
    int k,l,d,g,h;
    g=n;h=m;
    k=x%4;
    l=4-z%4;
    if(l==4)l=0;
    for(int i=1;i<=p;i++){
        n=g;m=h;
        cin>>r>>c;
        f(k);
        if(y&1){
            d=c;
            c=m-d+1;
        }
        f(l);
        cout<<r<<" "<<c<<endl;
    }
}
int main(){
    cin>>n>>m>>x>>y>>z>>p;
    solve();
}