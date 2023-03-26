#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,d;
main(){
for(cin>>n;n--;(a+b+c+d)%3==0&&d>=3*max(max(a,b),c)-a-b-c?cout<<"YES"<<endl:cout<<"NO"<<endl)cin>>a>>b>>c>>d;
return 0;
}
