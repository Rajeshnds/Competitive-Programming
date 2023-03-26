#include<bits/stdc++.h>
using namespace std;
int x,y,k,l;
int main(){
    cin>>x>>y;
    x*=100;y*=10;
    while((x>=100&&y>=120)||(x>=200&&y>=20)||(y>=220)){
        k=0,l=0;
        if(x>=200)l=200,x-=200;
        else if(x>=100)l=100,x-=100;
        if(y>=220-l)k=1,y-=(220-l);
        if(k){
            l=0;
            if(y>=220)l=220,y-=220;
            else if(y>=120)l=120,y-=120;
            else if(y>=20)l=20,y-=20;
            if(l>0&&x>=220-l)k=2,x-=(220-l);
        }
    }
    cout<<(k&1?"Ciel":"Hanako");
}
