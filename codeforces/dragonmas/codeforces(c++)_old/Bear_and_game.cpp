#include<bits/stdc++.h>
using namespace std;
int n,a,b;
main(){
cin>>n>>a;
if(a>15){cout<<15;return 0;}
for(int i=1;i<=n-1;i++){
    cin>>b;
    if(b-a>15){cout<<a+15;return 0;}
    a=b;
}
cout<<min(a+15,90);
}
