#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,d,k;
main(){
cin>>n;
while(n--){
    cin>>a>>b>>c>>d;
    k=3*(max(max(a,b),c))-a-b-c;
    cout<<(d>=k&&(d-k)%3==0?"YES":"NO")<<endl;
    }
return 0;
}
