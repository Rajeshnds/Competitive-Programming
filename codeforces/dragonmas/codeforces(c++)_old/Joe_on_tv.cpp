#include<bits/stdc++.h>
using namespace std;
float n,a,i;
main(){
cin>>n;
for(i=n;i>=1;i--){
    a+=(1/i);
}
cout<<a;
}
