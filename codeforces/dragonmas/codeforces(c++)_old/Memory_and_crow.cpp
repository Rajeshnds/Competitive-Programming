#include<bits/stdc++.h>
using namespace std;
int n,a,b;
main(){
cin>>n>>a;
for(int i=0;i<4;i++){
    cin>>b;
    cout<<a+b<<" ";
    a=b;
}
cout<<a;
}
