#include<bits/stdc++.h>
using namespace std;
int t,s,k;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>s;k=s;
    while(s>=10)k+=s/10,s=s/10+s%10;
    cout<<k;
}
}
