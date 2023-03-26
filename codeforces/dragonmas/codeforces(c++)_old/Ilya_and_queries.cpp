#include<bits/stdc++.h>
using namespace std;
string s;
int n,a,b,k,j,m[100001];
main(){
cin>>s>>n;
for(int i=0;i<s.size();i++){
    if(s[i]==s[i+1])m[j++]=1;
    else m[j++]=0;
}
for(int i=0;i<n;i++){
    cin>>a>>b;k=0;
    for(int j=a-1;j<b-1;j++)k+=m[j];
    cout<<k<<" ";
}
}
