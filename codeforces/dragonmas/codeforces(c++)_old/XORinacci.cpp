#include<bits/stdc++.h>
using namespace std;
int t,a,b,n;
main(){
for(cin>>t;t--;cout<<endl)
    cin>>a>>b>>n,cout<<(n%3==0?a:n%3==1?b:a^b);
}
