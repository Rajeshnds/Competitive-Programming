#include<bits/stdc++.h>
using namespace std;
int n,a,b[102];
main(){
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a;
    b[a]=i;
}
cout<<max((b[1]-1),max(abs(b[n]-1),max((n-b[1]),(n-b[n]))));
}
