#include<bits/stdc++.h>
using namespace std;
int n,k=1,m=1,a,b;
main(){
cin>>n>>a;n--;
while(n--){
    cin>>b;
    if(b>=a)k++,m=max(m,k);
    else k=1;
    a=b;
}
cout<<m;
}
