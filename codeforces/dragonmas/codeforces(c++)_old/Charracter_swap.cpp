#include<bits/stdc++.h>
using namespace std;
int k,n,j,d;
char l[5];
string s,t;
main(){
    for(cin>>k;k--;cout<<endl){
        cin>>n>>s>>t;d=0;j=0;
    for(int i=0;i<n&&d<=2;i++)if(s[i]!=t[i])d++,l[j++]=s[i],l[j++]=t[i];
    if(d==2&&l[0]==l[2]&&l[1]==l[3])cout<<"Yes";
    else cout<<"No";
    }
}

