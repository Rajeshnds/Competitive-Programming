#include<bits/stdc++.h>
using namespace std;
int n;
main(){
cin>>n;
string s[n],t[n];
for(int i=0;i<n;i++)cin>>s[i]>>t[i];
for(int i=0;i<n;i++)if(t[i]=="rat")cout<<s[i]<<endl;
for(int i=0;i<n;i++)if(t[i]=="woman"||t[i]=="child")cout<<s[i]<<endl;
for(int i=0;i<n;i++)if(t[i]=="man")cout<<s[i]<<endl;
for(int i=0;i<n;i++)if(t[i]=="captain")cout<<s[i]<<endl;
}
