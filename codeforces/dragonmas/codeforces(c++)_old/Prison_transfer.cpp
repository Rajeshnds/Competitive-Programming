#include<bits/stdc++.h>
using namespace std;
int n,t,c,k,m,a;
main(){
cin>>n>>t>>c;
while(n--){
    cin>>a;
    if(a<=t)k++;else k=0;
    if(k>=c)m++;
}
cout<<m;
}
