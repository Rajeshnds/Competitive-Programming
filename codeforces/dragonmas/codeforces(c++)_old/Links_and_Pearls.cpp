#include<bits/stdc++.h>
using namespace std;
string s;
int i,k;
main(){
cin>>s;
for(i=0;i<s.size();i++)k+=(s[i]=='o');
cout<<(k==0||(i-k)%k==0?"YES":"NO");
}
