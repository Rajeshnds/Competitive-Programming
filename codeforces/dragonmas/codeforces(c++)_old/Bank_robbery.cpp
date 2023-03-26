#include<bits/stdc++.h>
using namespace std;
int a,b,c,n,l,k;
main(){
cin>>a>>b>>c>>n;
for(int i=0;i<n;i++){
    cin>>k;
    if(k>b&&k<c)
    l++;
}
cout<<l;
}
