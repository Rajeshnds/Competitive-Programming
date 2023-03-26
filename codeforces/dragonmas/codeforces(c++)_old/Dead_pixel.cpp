#include<bits/stdc++.h>
using namespace std;
int n,a,b,x,y;
main(){
for(cin>>n;n--;cout<<max(a*y,max(a*(b-y-1),max(b*x,b*(a-x-1))))<<endl)
    cin>>a>>b>>x>>y;
}
