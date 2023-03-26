#include<bits/stdc++.h>
using namespace std;
int n,b;
main(){
cin>>n;
int a[n+1]={0};
while(n){
    cin>>b;
    a[b]=1;
    while(a[n])cout<<n--<<" ";
    cout<<endl;
}
}
