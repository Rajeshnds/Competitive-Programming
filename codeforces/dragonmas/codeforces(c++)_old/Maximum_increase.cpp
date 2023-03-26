#include<bits/stdc++.h>
using namespace std;
long long n,a,k,b,c;
main(){
cin>>n;
for(int i=0;i<n;i++){
        cin>>a;
if(a>b)k++;else k=1;
b=a;
c=max(c,k);
}
cout<<c;
}
