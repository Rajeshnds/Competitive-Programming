#include<bits/stdc++.h>
using namespace std;
int n,a;
main(){
cin>>n;
int b[n];
for(int i=1;i<=n;i++){
    cin>>a;
    b[a]=i;
}
for(int i=1;i<=n;i++)cout<<b[i]<<" ";
}
