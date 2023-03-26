#include<bits/stdc++.h>
using namespace std;
int t,a,b,n,k;
main(){
cin>>t;
while(t--){
        k=0;
    cin>>a>>b>>n;
    if(b>a)swap(a,b);
    while(a<=n){b+=a;swap(a,b);k++;}
    cout<<k<<endl;
}
}
