#include<bits/stdc++.h>
using namespace std;
int n;
string s[200008];
unordered_map<string,int>m;
main(){
cin>>n;
for(int i=1;i<=n;i++)cin>>s[i],m[s[i]]=i;
for(int i=n;i>0;i--)if(m[s[i]]==i)cout<<s[i]<<endl;
}
