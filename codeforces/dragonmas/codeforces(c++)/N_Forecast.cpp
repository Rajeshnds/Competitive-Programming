#include<bits/stdc++.h>
using namespace std;
double a,b,c,d,x,y;
int main(){
    cin>>a>>b>>c;
    d=sqrt(b*b-4*a*c);
    x=(-b+d)/(2*a);
    y=(-b-d)/(2*a);
    if(y>x)swap(x,y);
    cout<<fixed<<setprecision(10)<<x<<" "<<y;
}