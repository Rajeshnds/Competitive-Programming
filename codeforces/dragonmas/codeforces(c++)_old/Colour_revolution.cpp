#include<bits/stdc++.h>
using namespace std;
long long t,n,k;
main(){
for(cin>>t;t--;){
    cin>>n>>k;
    int i=n/(1+k+k*k+k*k*k);
    cout<<i<<" "<<k*i<<" "<<k*k*i<<" "<<k*k*k*i<<endl;
}
}
