#include<bits/stdc++.h>
using namespace std;
int t,n,d,a,aa,m;
main(){
cin>>t;
while(t--){
    cin>>n>>d>>a;
for(int i=1;i<n;i++){
    cin>>aa;
    m=min(aa,d/i);
    a+=m;
    d-=m*i;
}
cout<<a<<endl;
}
}
