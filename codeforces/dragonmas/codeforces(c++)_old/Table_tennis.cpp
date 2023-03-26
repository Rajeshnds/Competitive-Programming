#include<bits/stdc++.h>
using namespace std;
long long n,k,a,b,t=0;
main(){
cin>>n>>k>>a;
for(int i=1;i<=n-1;i++){
        cin>>b;
    if(t==k){cout<<a;return 0;}
    if(a>b)t++;
    else a=b,t=1;
}
cout<<a;
}
