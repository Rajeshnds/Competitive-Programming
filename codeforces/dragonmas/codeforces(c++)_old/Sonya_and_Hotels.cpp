#include<bits/stdc++.h>
using namespace std;
int n,d,k=2,a,b;
main(){
cin>>n>>d>>a;n--;
while(n--){
    cin>>b;
    b-a==2*d?k++:b-a>2*d?k+=2:0;
    a=b;
}
cout<<k;
}
