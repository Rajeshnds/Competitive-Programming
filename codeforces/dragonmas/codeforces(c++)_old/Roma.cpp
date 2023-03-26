#include<bits/stdc++.h>
using namespace std;
int n,k,l,m;
string s;
main(){
cin>>n>>k;
for(int i=1;i<=n;i++){
    cin>>s;l=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='4'||s[i]=='7')l++;
}
if(l<=k)m++;
}
cout<<m;
}
