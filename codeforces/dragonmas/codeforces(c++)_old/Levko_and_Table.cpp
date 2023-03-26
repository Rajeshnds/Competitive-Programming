#include<bits/stdc++.h>
using namespace std;
int n,k,p;
main(){
    cin>>n>>k;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    cout<<(i==j?k:p)<<" ";
}
cout<<endl;
}
}
