#include<bits/stdc++.h>
using namespace std;
int t,a,b,s;
main(){
    for(cin>>t;t--;)cin>>a,s+=abs(a-b)+2,b=a;
    cout<<s-1;
}
