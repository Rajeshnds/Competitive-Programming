#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d;
void edges(){
    cin>>a>>b>>c;
    d=sqrt(a*b*c);
    cout<<4*(a*b/d+b*c/d+c*a/d);
}
int main(){
    edges();
}
