#include<bits/stdc++.h>
using namespace std;
int n,m,k,l;
string s;
main(){
cin>>n>>s;
for(int i=0;i<n-1;i++){
    if(s[i]=='R')k++;
    else l++;
    if(s[i]==s[i+1]&&k==l)m++;
}
cout<<m;
}
