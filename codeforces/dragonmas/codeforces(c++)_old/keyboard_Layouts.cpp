#include<bits/stdc++.h>
using namespace std;
char f[300],s[10000],a[30],b[30];
main(){
cin>>a>>b>>s;
for(int i=0;i<26;i++){
    f[a[i]]=b[i];
    f[a[i]-32]=b[i]-32;
}
for(int i=0;i<strlen(s);i++){
    if(f[s[i]])cout<<f[s[i]];else cout<<s[i];
}
}
