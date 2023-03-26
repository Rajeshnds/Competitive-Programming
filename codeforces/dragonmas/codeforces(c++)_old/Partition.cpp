#include<bits/stdc++.h>
using namespace std;
int n,a,b,c;
main(){
    for(cin>>n;n--;)cin>>a,a<0?b+=a:c+=a;cout<<c-b;
}
