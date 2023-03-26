#include<bits/stdc++.h>
using namespace std;
int q,a,b,c;
main(){
for(cin>>q;q--;cout<<max(0,(abs(a-b)+abs(b-c)+abs(c-a)-4))<<endl)
    cin>>a>>b>>c;
}
