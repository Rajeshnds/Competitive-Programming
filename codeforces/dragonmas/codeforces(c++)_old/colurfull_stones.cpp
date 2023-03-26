#include<bits/stdc++.h>
using namespace std;
string s,t;
int j,i;
main(){
cin>>s>>t;
for(i=0;i<t.size();i++)
    if(t[i]==s[j])j++;
cout<<j+1;
}
