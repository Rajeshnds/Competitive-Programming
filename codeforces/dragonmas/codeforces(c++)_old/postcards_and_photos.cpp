#include<bits/stdc++.h>
using namespace std;
string s;
int l,k;
main(){
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]!=s[i+1])k++,l=0;
    else l++;
    if(l==5)k++,l=0;
}
cout<<k;
}
