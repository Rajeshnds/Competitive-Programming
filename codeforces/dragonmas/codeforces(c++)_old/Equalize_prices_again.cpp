#include<bits/stdc++.h>
using namespace std;
int t,n,a,b;
main(){
    b=0;
cin>>t;
while(t--){
        b=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a,b+=a;
cout<<b/n+(b%n!=0)<<endl;
}
return 0;
}
