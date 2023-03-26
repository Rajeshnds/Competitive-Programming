#include<bits/stdc++.h>
using namespace std;
int n,l[26],k,q,p;
string s;
main(){
for(cin>>n;n--;)cin>>s,l[s[0]-'a']++;
for(auto i:l){p=i/2;q=i-i/2;k+=p*(p-1)/2+q*(q-1)/2;}
cout<<k;
}
