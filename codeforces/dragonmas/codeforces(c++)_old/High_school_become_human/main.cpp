#include<bits/stdc++.h>
using namespace std;
double x,y;
char bigger(){
    cin>>x>>y;
    x=y*log(x)-x*log(y);
    return x>0?'>':x<0?'<':'=';
}
int main(){
    cout<<bigger();
}
