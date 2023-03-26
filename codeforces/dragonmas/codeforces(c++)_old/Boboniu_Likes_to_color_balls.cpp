#include<bits/stdc++.h>
using namespace std;
int t,r,g,b,w;
main(){
    for(cin>>t;t--;cout<<(w<2||(w>2&&r*g*b)?"Yes":"No")<<endl)cin>>r>>g>>b>>w,w=w%2+r%2+g%2+b%2;
}
