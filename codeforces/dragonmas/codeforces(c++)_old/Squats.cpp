#include<bits/stdc++.h>
using namespace std;
int n,k,l;
string s;
main(){
cin>>n>>s;
for(int i=0;i<n;i++)s[i]=='X'?k++:l++;
if(k==l)cout<<0<<endl<<s;
else if(k<l){
    k=n/2-k;cout<<k<<endl;
    for(int i=0;k>0;i++)if(s[i]=='x')s[i]='X',k--;
    cout<<s;
}
else{
    l=n/2-l;cout<<l<<endl;
    for(int i=0;l>0;i++)if(s[i]=='X')s[i]='x',l--;
    cout<<s;
}
}
