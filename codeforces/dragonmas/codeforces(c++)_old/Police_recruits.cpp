#include<bits/stdc++.h>
using namespace std;
long long n,a,b,k;
main(){
cin>>n;
while(n--){
    cin>>a;
    b+=a;
    if(b<0){
        k++;
        b=0;
}
}
cout<<k;
return 0;
}
