#include<bits/stdc++.h>
using namespace std;
int n,r,i;
string s;
main(){
for(cin>>n>>s;i<n;i++){
    if(s[i]%2==0)r+=i+1;
}
cout<<r;
}
