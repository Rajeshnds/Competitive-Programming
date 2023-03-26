#include<bits/stdc++.h>
using namespace std;
int n,a,m,f=1,k,k1,k2;
main(){
cin>>n;
while(n--){
    cin>>a;
    a?(k++,m=max(m,k)):(k=0,f=0);
    f?k1=k:k2=k;
}
cout<<max(m,k1+k2);
}
