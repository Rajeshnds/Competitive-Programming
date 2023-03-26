#include<bits/stdc++.h>
using namespace std;
double a,b,c,d;
main(){
    cin>>a>>b>>c;
    cout<<max(d,ceil((a*c-b*c)/b));
}
