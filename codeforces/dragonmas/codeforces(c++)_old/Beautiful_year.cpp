#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,d;
main(){
cin>>n;
while(true){
    n++;
    a=n/1000;
    b=(n/100)%10;
    c=(n/10)%10;
    d=n%10;
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        break;
}
cout<<n;
return 0;
}
