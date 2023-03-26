#include<bits/stdc++.h>
using namespace std;
int n,a,b,k,i,c;
string s[3]={"maybe","rated","unrated"};
main(){
for(cin>>n;i<n;i++){
    cin>>a>>b;
    if(a!=b){k=1;break;}
    if(i>0&&a>c){k=2;break;}
    c=a;
}
cout<<s[k];
}
