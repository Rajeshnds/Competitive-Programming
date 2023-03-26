#include<bits/stdc++.h>
using namespace std;
int n,c,t,a,k;
main(){
cin>>n>>c>>a;
while(n>1){
    cin>>t;
    if(t-a>c)k=0;else k++; a=t;
n--;
}
cout<<k+1;
}
