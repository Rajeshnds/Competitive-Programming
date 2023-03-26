#include<bits/stdc++.h>
using namespace std;
double a,b,c,d;
int main(){
    cin>>a>>b>>c>>d;
    cout<<setprecision(10)<<(a*d)/(a*d+b*c-a*c);
}