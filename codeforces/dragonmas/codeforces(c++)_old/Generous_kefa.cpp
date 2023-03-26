#include<bits/stdc++.h>
using namespace std;
int n,k,b[124],m;
string s;
main(){
cin>>n>>k>>s;
for(int i=0;i<n;i++)b[s[i]]++,m=max(m,b[s[i]]);
cout<<(m<=k?"YES":"NO");
}
